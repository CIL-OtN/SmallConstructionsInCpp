#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <exception>
#include <stdexcept>


using namespace std;

namespace cppmath {

template<typename T>
class Matrix
{
public:

    using MatrixDataType = vector<vector<T>>;

    Matrix() = delete;
    Matrix(size_t rows, size_t cols);
    Matrix(size_t rows, size_t cols, const T &value);

    Matrix operator+(const Matrix &rhs);
    Matrix& operator+=(const Matrix &rhs);

    Matrix operator-(const Matrix &rhs);
    Matrix& operator-=(const Matrix &rhs);

    Matrix operator*(const T &scalar);
    Matrix& operator*=(const T &scalar);

    Matrix operator/(const T &scalar);
    Matrix& operator/=(const T &scalar);

    Matrix operator*(const Matrix &rhs);
    Matrix& operator*=(const Matrix &rhs);

    void print_matrix() const;

    size_t num_rows() const;
    size_t num_cols() const;

private:
    size_t m_rows;
    size_t m_cols;
    MatrixDataType m_data;
};


template<typename T>
Matrix<T>::Matrix(size_t rows, size_t cols) :
    m_rows(rows),
    m_cols(cols),
    m_data(m_rows, vector<T>(m_cols, 0))
{}

template<typename T>
Matrix<T>::Matrix(size_t rows, size_t cols, const T &value) :
    m_rows(rows),
    m_cols(cols),
    m_data(m_rows, vector<T>(m_cols, value))
{}

template<typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> &rhs)
{
	if(m_rows != rhs.m_rows)
		throw(std::invalid_argument("Number of rows are not equal!"));

	if(m_cols != rhs.m_cols)
		throw(std::invalid_argument("Number of cols are not equal!"));

    Matrix<T> result(m_rows, m_cols);

    for (size_t i = 0; i != m_rows; i++)
    {
        std::transform(
            m_data[i].begin(),
            m_data[i].end(),
            rhs.m_data[i].begin(),
            result.m_data[i].begin(),
            std::plus<T>()
        );
    }

    return result;
}


template<typename T>
Matrix<T>& Matrix<T>::operator+=(const Matrix<T> &rhs)
{
	if(m_rows != rhs.m_rows)
		throw(std::invalid_argument("Number of rows are not equal!"));

	if(m_cols != rhs.m_cols)
		throw(std::invalid_argument("Number of cols are not equal!"));

    for (size_t i = 0; i != m_rows; i++)
    {
        std::transform(
            m_data[i].begin(),
            m_data[i].end(),
            rhs.m_data[i].begin(),
            m_data[i].begin(),
            std::plus<T>()
        );
    }

    return *this;
}

template<typename T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> &rhs)
{
    if(m_rows != rhs.m_rows)
        throw(invalid_argument("Number of rows are not equal!"));

    if(m_cols != rhs.m_cols)
        throw(invalid_argument("Number of cols are not equal!"));

    Matrix<T> result(m_rows, m_cols);

    for (size_t i = 0; i != m_rows; i++)
    {
        std::transform(
            m_data[i].begin(),
            m_data[i].end(),
            rhs.m_data[i].begin(),
            result.m_data[i].begin(),
            std::minus<T>()
        );
    }

    return result;
}

template<typename T>
Matrix<T>& Matrix<T>::operator-=(const Matrix<T> &rhs)
{
    if(m_rows != rhs.m_rows)
        throw(invalid_argument("Number of rows are not equal!"));

    if(m_cols != rhs.m_cols)
        throw(invalid_argument("Number of cols are not equal!"));

    for (size_t i = 0; i != m_rows; i++)
    {
        std::transform(
            m_data[i].begin(),
            m_data[i].end(),
            rhs.m_data[i].begin(),
            m_data[i].begin(),
            std::minus<T>()
        );
    }

    return *this;
}

template<typename T>
Matrix<T> Matrix<T>::operator*(const T &scalar)
{
    Matrix<T> result(m_rows, m_cols);

    for (size_t i = 0; i != m_rows; i++)
    {
        transform(
            m_data[i].begin(),
            m_data[i].end(),
            result.m_data[i].begin(),
            [scalar] (const T val) -> T { return val * scalar; }
        );
    }

    return result;
}

template<typename T>
Matrix<T>& Matrix<T>::operator*=(const T &scalar)
{
    for (size_t i = 0; i != m_rows; i++)
    {
        transform(
            m_data[i].begin(),
            m_data[i].end(),
            m_data[i].begin(),
            [scalar] (const T val) -> T { return val * scalar; }
        );
    }

    return *this;
}

template<typename T>
Matrix<T> Matrix<T>::operator/(const T &scalar)
{
    if(scalar == 0)
        throw(overflow_error("You can not divide by zero!"));

    Matrix<T> result(m_rows, m_cols);

    for (size_t i = 0; i != m_rows; i++)
    {
        transform(
            m_data[i].begin(),
            m_data[i].end(),
            result.m_data[i].begin(),
            [scalar] (const T val) -> T { return val / scalar; }
        );
    }

    return result;
}

template<typename T>
Matrix<T>& Matrix<T>::operator/=(const T &scalar)
{
    if(scalar == 0)
        throw(overflow_error("You can not divide by zero!"));


    for (size_t i = 0; i != m_rows; i++)
    {
        transform(
            m_data[i].begin(),
            m_data[i].end(),
            m_data[i].begin(),
            [scalar] (const T val) -> T { return val / scalar; }
        );
    }

    return *this;
}

template <typename T>
Matrix<T> Matrix<T>::operator*(const Matrix<T> &rhs)
{
    if(m_cols != rhs.m_rows) {
        throw(invalid_argument("Number of rows are not equal!"));
    }
    
	Matrix<T> result(m_rows, rhs.m_cols);

	for (std::size_t i = 0; i != m_rows; ++i)
	{
		for (std::size_t j = 0; j != rhs.m_cols; ++j)
		{
			for (std::size_t k = 0; k != rhs.m_rows; ++k)
			{
				result.m_data[i][j] = result.m_data[i][j] + m_data[i][k] * rhs.m_data[k][j];
			}
		}
	}

	return result;
}

template<typename T>
Matrix<T>& Matrix<T>::operator*=(const Matrix &rhs)
{
    *this = (*this) * rhs;


    return *this;
}

template<typename T>
void Matrix<T>::print_matrix() const
{

    for (size_t i = 0; i < m_rows; i++)
    {
        for (size_t j = 0; j < m_cols; j++)
        {
            cout << m_data[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

template<typename T>
size_t Matrix<T>::num_rows() const
{
    return m_rows;
}

template<typename T>
size_t Matrix<T>::num_cols() const
{
    return m_cols;
}

} // namespace cppmath

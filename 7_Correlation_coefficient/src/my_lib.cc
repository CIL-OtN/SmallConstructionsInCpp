#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <iomanip>
#include <string>
#include <time.h>
#include <math.h>

#include "my_lib.h"

using namespace std;

void cout_hello_world()
{
    std::cout << "Cout: 7_Correlation_coefficient Test hello from my_lib.cc and my_lib.h" << std::endl;
}


void fill_matrix(Matrix &matrix_fun)
{
    for (std::size_t i = 0; i < matrix_fun.size(); i++)
    {
        for (std::size_t j = 0; j < matrix_fun[i].size(); j++)
        {
            matrix_fun[i][j] = rand() % 30;
        }
    }
}


void print_matrix(Matrix &matrix_func)
{
    StringVector row_identifier = {"x-values:", "y-values:"};
    DoubleVector row_max_vec = max_row_values(matrix_func);
    DoubleVector row_sum_vec = sum_row_values(matrix_func);
    DoubleVector row_mean_vec = mean_row_values(matrix_func);

    cout << "Matrix print:";
    for(std::size_t i = 0; i < matrix_func[0].size()+2; i++)
        cout << "   ";
    cout << "Max:    Sum:    Mean:" << endl;

    for (std::size_t i = 0; i < matrix_func.size(); i++)
    {
        cout << row_identifier[i];      // print_title function
        for (std::size_t j = 0; j < matrix_func[i].size(); j++)
        {
            cout << setw(3) << matrix_func[i][j];
        }
        cout << "         " << setw(5) << row_max_vec[i];
        cout << "   "<< setw(5) << row_sum_vec[i];
        cout << "    " << setw(5) << setprecision(3) << row_mean_vec[i] << endl;
    }
    print_col(matrix_func);
}


void print_col(Matrix &matrix_func)
{
    cout << "---------";     // function line
    for(std::size_t i = 0; i < matrix_func[0].size(); i++)
        cout << "---";
    cout << endl;

    cout << "col sum: ";
    for (std::size_t j = 0; j < matrix_func[0].size(); j++)         // Korrektur
    {
        double sum = 0.0;
        for (std::size_t i = 0; i < matrix_func.size(); i++)
        {
            sum += matrix_func[i][j];
        }
        cout << setw(3) << sum;
    }
}


DoubleVector max_row_values(Matrix &matrix_func)
{
	DoubleVector row_max_vec(matrix_func.size(), 0.0);

	for (unsigned long int i = 0; i != matrix_func.size(); ++i)
	{
		double act_row_max = 0.0;

		for (unsigned long int j = 0; j != matrix_func[i].size(); ++j)
		{
			if (matrix_func[i][j] > act_row_max)
			{
				act_row_max = matrix_func[i][j];
			}
		}
		row_max_vec[i] = act_row_max;
	}
	return row_max_vec;
}


DoubleVector sum_row_values(Matrix &matrix_func)
{
    DoubleVector row_sum_vec(matrix_func.size(), 0.0);

	for (unsigned long int i = 0; i != matrix_func.size(); ++i)
	{
        double sum = 0.0;

		for (unsigned long int j = 0; j != matrix_func[i].size(); ++j)
		{
            sum += matrix_func[i][j];
            row_sum_vec[i] = sum;
        }
    }
	return row_sum_vec;
}


DoubleVector mean_row_values(Matrix &matrix_func)
{
    DoubleVector row_mean_vec(matrix_func.size(), 0.0);

	for (unsigned long int i = 0; i != matrix_func.size(); ++i)
	{
        double sum = 0.0;

		for (unsigned long int j = 0; j != matrix_func[i].size(); ++j)
		{
            sum += matrix_func[i][j];
            row_mean_vec[i] = sum / matrix_func[i].size();
        }
    }
	return row_mean_vec;
}
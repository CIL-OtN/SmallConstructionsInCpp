#pragma once

void cout_hello_world();

using namespace std;

typedef vector<double>          DoubleVector;
typedef vector<DoubleVector>    Matrix;
typedef vector<std::string>     StringVector;

double sort_and_max(vector<double> &vec);

/**
 * @brief This function fills a passed matrix with random values from 0 - 10
 *
 * @param vector<vector<double>> &matrix_func
 */
void fill_matrix(Matrix &matrix_fun);

/**
 * @brief This function prints a passed matrix
 *
 * @param vector<vector<double>> &matrix_func
 */
void print_matrix(Matrix &matrix_func);

/**
 * @brief This function sum up and prints the cols of a passed matrix
 *
 * @param vector<vector<double>> &matrix_func
 */
void print_col(Matrix &matrix_func);

/**
 * @brief This function sum up and prints the cols of a passed matrix
 *
 * @param vector<vector<double>> &matrix_func
 */
void print_col(Matrix &matrix_func);

/**
 * @brief This function returns the max value of the rows of a passed matrix
 *
 * @param vector<vector<double>> &matrix_func
 * @return vector<double> row_max_vec
 */
DoubleVector max_row_values(Matrix &matrix_func);

/**
 * @brief This function returns the sum value of the rows of a passed matrix
 *
 * @param vector<vector<double>> &matrix_func
 * @return vector<double> row_sum_vec
 */
DoubleVector sum_row_values(Matrix &matrix_func);

/**
 * @brief This function returns the mean value of the rows of a passed matrix
 *
 * @param vector<vector<double>> &matrix_func
 * @return vector<double> row_mean_vec
 */
DoubleVector mean_row_values(Matrix &matrix_func);
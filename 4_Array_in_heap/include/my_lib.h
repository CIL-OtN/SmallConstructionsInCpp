#pragma once

/**
 * @brief Choose your own array elements in this function
 * 
 * @param int construct_array[] 
 * @param const int &len 
 * @return int* construct_array
 */
int* construct_array(int construct_array[], const int &len);

/**
 * @brief A test function to see if array has the same address like in main
 * 
 * @param int add_arr[]
 * @param const int &len 
 */
void address_test(int add_arr[], const int &len);
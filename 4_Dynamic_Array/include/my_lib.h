#pragma once

#include <cstddef>

/**
 * @brief Dynamic Structure 
 * 
 * @param double *m_data
 * @param std::size_t m_length
 */
struct DynamicArray 
{
    double *m_data;
    std::size_t m_length;
};

/**
 * @brief Create a dynamic array object
 * 
 * @param lenght 
 * @return
 */
DynamicArray create_dynamic_array(std::size_t &lenght);

/**
 * @brief 
 * 
 * @param dynamic_array 
 */
void print_my_array(DynamicArray &dynamic_array);

/**
 * @brief Push back the value at the end of the dynamic array
 * 
 * @param dynamic_array The input pointer to an double dynamic array
 * @param value The value to append to the dynamic array
 */
void push_back(DynamicArray &dynamic_array, const int &value);

/**
 * @brief Pop back the value at the end of the dynamic array
 * 
 * @param dynamic_array The input pointer to an double dynamic array
 */
void pop_back(DynamicArray &dynamic_array);


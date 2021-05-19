#include <iostream>
#include <cstddef>
#include "my_lib.h"

using namespace std;


DynamicArray create_dynamic_array(std::size_t &length)
{
    DynamicArray dynamic_array = {nullptr, 0};

    dynamic_array.m_length = length;
    dynamic_array.m_data = new double[length];

    cout << "Choose " << length << " elements for your array: ";
    for (std::size_t i = 0; i < length; i++)
    {
        cin >> dynamic_array.m_data[i];
    }

    return dynamic_array;
}


void print_my_array(DynamicArray &dynamic_array) 
{
    cout << "Print array: ";
    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        cout << dynamic_array.m_data[i] << " ";
    }
    cout << endl;
}


void push_back(DynamicArray &dynamic_array, const int &value) 
{
    double* temp = nullptr;
    temp = new double[dynamic_array.m_length + 1];

    cout << "Push_back function call: " << endl;
    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        temp[i] = dynamic_array.m_data[i];
    }
    
    temp[dynamic_array.m_length] = value;

    delete[] dynamic_array.m_data;

    dynamic_array.m_data = temp;
    dynamic_array.m_length++;
}


void pop_back(DynamicArray &dynamic_array) 
{
    double* temp = nullptr;
    temp = new double[dynamic_array.m_length - 1];

    cout << "Pop_back function call : " << endl;
    for (std::size_t i = 0; i < dynamic_array.m_length - 1; i++)
    {
        temp[i] = dynamic_array.m_data[i];
    }
    
    delete[] dynamic_array.m_data;

    dynamic_array.m_data = temp;
    dynamic_array.m_length--;
}
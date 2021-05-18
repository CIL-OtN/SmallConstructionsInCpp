#include <iostream>

#include "my_lib.h"

using namespace std;


void cout_hello_world()
{
    std::cout << "Cout: Test hello from my_lib.cc and my_lib.h" << std::endl;
}

void fu_arr(int p_fu[], int len)
{
    cout << "Function call!" << endl;

    for(int i = 0; i < len; i++)
    {
        cout << "Idx " << i << ". Value: " << p_fu[i] << " Address: " << &p_fu[i] << endl;    // access to the value and address
    }
    cout << endl;
}

int array_sum(int sum_array[], const int len) {

    double sum = 0;

    for(int i=0; i < len; i++)
    {
        sum += sum_array[i];
    }

    return sum;
}

int array_maximum(int max_array[], int len)   // or int* max_array because of the first element
{
    int current_max_value = 0;

    for (int i = 0; i < len; i++)
    {
        if(i == 0) {
            current_max_value = max_array[i];
        }
        else if (max_array[i] > current_max_value)
        {
            current_max_value = max_array[i];
        }
    }

    return current_max_value;
}

int *construct_arr(int construct_array[], const int len) {

    int arr_elem;

    cout << "Construct your array: " << endl;
    for(int i = 0; i < len; i++)
    {
        cout << i << ".) Array element: ";
        cin >> arr_elem;
        // p[i] <=> *(p + i)
        construct_array[i] = arr_elem;
    }

    return construct_array;
}
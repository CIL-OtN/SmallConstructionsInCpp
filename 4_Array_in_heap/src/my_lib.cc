#include <iostream>
#include "my_lib.h"

using namespace std;

int* construct_array(int construct_array[], const int &len) 
{
    int arr_elem = 0;

    cout << "Choose elements: " << endl;
    cout << "---------------- " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << i << ".) Array element: ";
        cin >> arr_elem;
        // p_array[i] <=> *(p + i)
        // construct_array[i] = arr_elem;
        *(construct_array + i) = arr_elem;
    }
    
    return construct_array;
}

void address_test(int add_arr[], const int &len) 
{
    cout << "Address test function call: " << endl;
    cout << "--------------------------- " << endl;

    for(int i = 0; i < len; i++)
    {
        cout << "Idx " << i << ". Value: " << *(add_arr + i) << " Address: " << &*(add_arr + i) << endl;
    }
    cout << endl;
}
#include <iostream>
#include "my_lib.h"

using namespace std;

int main()
{
    int array_size;

    std::system("clear");
    cout << "Choose the size of your array: ";
    cin >> array_size;
    cout << endl;

    int *p_array = new int[array_size];

    construct_array(p_array, array_size);

    cout << "Main call: " << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << "Idx " << i << ". Value: " << *(p_array + i) << " Address: " << &*(p_array + i) << endl;
    }
    cout << endl;

    address_test(p_array, array_size);
    
    return 0;
}
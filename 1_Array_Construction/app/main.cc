#include <iostream>
#include "my_lib.h"

using namespace std;


int main()
{
    int array_size;

    std::system("clear");

    void cout_hello_world();

    cout << "Choose the size of your array: ";
    cin >> array_size;
    cout << endl;

    int *p = new int[array_size];   // Heap allocation
    // Size of the pointer itself in bytes
    // cout << "Size of the pointer itself             : " << sizeof(p) << endl;
    // Size of the first array element, that pointer points to in bytes
    // cout << "Size of the first element in pointer   : " << sizeof(*p) << endl << endl;

    construct_arr(p, array_size); cout << endl;

    cout << "Main call!" << endl;
    for(int i = 0; i < array_size; i++)
    {
        cout << "Idx " << i << ". Value: " << p[i] << " Address: " << &p[i] << endl;    // access to the value and address
    }
    cout << endl;

    fu_arr(p, array_size);
    cout << "The biggest element is: " << array_maximum(p, array_size) << endl;
    cout << "The sum of elements is: " << array_sum(p, array_size) << endl;

    delete[] p;                     // Heap deallocation
    p = nullptr;

    if(p != nullptr)
    {
        cout << "Address for p not deleted" << endl;
    }

    return 0;
}

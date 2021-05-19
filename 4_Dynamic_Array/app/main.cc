#include <iostream>
#include <cstddef>
#include "my_lib.h"

using namespace std;

int main() {

    std::system("clear");

    DynamicArray my_array;
    std::size_t size_arr = 0;

    cout << "Program: Dynamic Array" << endl;
    cout << "----------------------" << endl;
    cout << "Size of dynamic array: ";
    cin >> size_arr;

    my_array = create_dynamic_array(size_arr);

    print_my_array(my_array);

    push_back(my_array, 12);

    print_my_array(my_array);
    
    pop_back(my_array);

    print_my_array(my_array);


    delete[] my_array.m_data;
    my_array.m_data = nullptr;

    if(my_array.m_data != nullptr)
    {
        cout << "Address for my_array.m_data not deleted" << endl;
    } 
    
    return 0;
}
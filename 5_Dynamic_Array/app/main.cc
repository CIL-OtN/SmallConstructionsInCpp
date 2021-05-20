#include <iostream>
#include <cstddef>
#include "my_lib.h"
#include "AlgoArray.h"

using namespace std;

int main() {

    std::system("clear");

    DynamicArray my_array;
    std::size_t size_arr = 0;

    cout << "Operations with your dynamic array" << endl;
    cout << "----------------------" << endl;
    cout << "Size of dynamic array: ";
    cin >> size_arr;

    my_array = create_dynamic_array(size_arr);

    print_my_array(my_array);
    
    double max_main = max(my_array);
    double sum_main = sum(my_array);
    double mean_main = mean(my_array);
    double median_main = median(my_array);
    double variance_main = variance(my_array);
    double stddev_main = stddev(my_array);
    
    cout << "Max in main.c      : " << max_main << endl;
    cout << "Sum in main.c      : " << sum_main << endl;
    cout << "Mean in main.c     : " << mean_main << endl;
    cout << "Median in main.c   : " << median_main << endl;
    cout << "Variance in main.c : " << variance_main << endl;
    cout << "Stddev in main.c   : " << stddev_main << endl;


    // push_back(my_array, 12);
    // pop_back(my_array);

    delete[] my_array.m_data;
    my_array.m_data = nullptr;

    if(my_array.m_data != nullptr)
    {
        cout << "Address for my_array.m_data not deleted" << endl;
    } 
    
    return 0;
}
#include <iostream>

#include "my_lib.h"

using namespace std;


void cout_hello_world()
{
    std::cout << "Test 3_Mean_Array -> my_lib.cc and my_lib.h" << std::endl;
}

namespace computation
{
    int mean_array_value(int *array, const unsigned int &length)
    {
        double mean_value = 0.0;

        cout << "Mean with integers: ";

        for (unsigned int i = 0; i < length; i++)
        {
            mean_value += array[i];
        }

        return mean_value /= length;
    }

    double mean_array_value(double *array, const unsigned int &length)
    {
        double mean_value = 0.0;
        cout << "Mean with doubles: ";

        for (unsigned int i = 0; i < length; i++)
        {
            mean_value += array[i];
        }

        mean_value /= length;

        return mean_value;
    }
}
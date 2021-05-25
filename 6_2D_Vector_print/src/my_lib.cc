#include <iostream>
#include <vector>
#include <stdio.h>

#include "my_lib.h"

using namespace std;

void cout_hello_world()
{
    std::cout << "Cout: Test hello from my_lib.cc and my_lib.h" << std::endl;
}

void line(unsigned int &len)
{
    for (std::size_t i = 0; i < (len*2)-1; i++)
        cout << "-";
    cout << endl;
}
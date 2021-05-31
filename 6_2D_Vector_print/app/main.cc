#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <stdio.h>

#include "my_lib.h"

using namespace std;

typedef std::vector<int>            IntVector;
typedef std::vector<vector<int>>    D_2_IntVector;


void print_2D_vector_like_c(D_2_IntVector &vec);
void print_2D_vector_iterator(D_2_IntVector &vec);
void print_2D_vector_auto(D_2_IntVector &vec);

int main()
{
    std::system("clear"); cout << endl;

    unsigned int num_rows = 0;
    unsigned int num_cols = 0;

    cout << "2D-Vector:" << endl;
    cout << "----------" << endl;
    cout << "Choose rows x cols: " << endl;
    cout << "rows: "; cin >> num_rows;
    cout << "cols: "; cin >> num_cols; cout << endl;

    D_2_IntVector my_2Dvector (num_rows, IntVector(num_cols, 0));

    print_2D_vector_like_c(my_2Dvector);
    line(num_cols);
    cout << endl;
    print_2D_vector_iterator(my_2Dvector);
    line(num_cols);
    cout << endl;
    print_2D_vector_auto(my_2Dvector);
    line(num_cols);
    cout << endl;

    return 0;
}

void print_2D_vector_like_c(D_2_IntVector &vec)
{
    cout << "Function call: print_2D_vector_like_c" << endl;
    cout << "-------------------------------------" << endl;

    for (std::size_t i = 0; i < vec.size(); i++)
    {
        for (std::size_t j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

void print_2D_vector_iterator(D_2_IntVector &vec)
{
    D_2_IntVector::iterator row;
    IntVector::iterator col;

    cout << "Function call: print_2D_vector_iterator" << endl;
    cout << "---------------------------------------" << endl;

    for (row = vec.begin(); row != vec.end(); row++)
    {
        for (col = row->begin(); col != row->end(); col++)
        {
            cout << *col  << " ";
        }
        cout << endl;
    }
}

void print_2D_vector_auto(D_2_IntVector &vec)
{
    cout << "Function call: print_2D_vector_auto" << endl;
    cout << "-----------------------------------" << endl;
    
    for (auto row = vec.begin(); row != vec.end(); row++)
    {
        for (auto col = row->begin(); col != row->end(); col++)
        {
            cout << *col << " ";
        }
        cout << endl;
    }
}

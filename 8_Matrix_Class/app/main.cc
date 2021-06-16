#include <iostream>

#include "Matrix.h"

using namespace std;

// Video: Abschnitt 24: Programmierprojekt 3: Die Template Matrix Klasse

int main()
{
    system("clear");

    cppmath::Matrix<double> m1(1, 3, 4);
    m1.print_matrix();

    cppmath::Matrix<double> m2(2, 3, 0);
    m2.print_matrix();

    try
    {
        cppmath::Matrix<double> m3 = m1 + m2;
        m3.print_matrix();
    }
    catch(const exception &e)
    {
        cerr << e.what() << endl;
    }



    return 0;
}

#include <iostream>
#include <vector>
#include <time.h>

#include "my_lib.h"

using namespace std;

// code running test in powershell:
// PS C:\Users\eywiotosof\Documents\GitHub\SmallConstructionsInCpp\build\7_Correlation_coefficient\app> Measure-Command {.\7_Correlation_coefficient_Executable.exe}

int main()
{
    std::system("clear"); cout << endl;

    srand (time(NULL));

    double measures = 0;

    cout << "How many measures: ";
    cin >> measures;
    Matrix matrix(2, DoubleVector(measures, 0));

    fill_matrix(matrix);
    print_matrix(matrix);

    sort_row_values(matrix);



    cout << endl;

    return 0;
}
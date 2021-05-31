#include <iostream>
#include <vector>
#include <time.h>

#include "my_lib.h"

using namespace std;

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

    cout << endl;

    return 0;
}
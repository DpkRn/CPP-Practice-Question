#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 int rows;
    int queries;
    cin >> rows >> queries;
//    int rows = 3;
    int cols;

    int** matrix = new int*[rows]; // create an array of pointers to int arrays

    for (int i = 0; i < rows; i++) {
        cin >> cols;
        matrix[i] = new int[cols]; // create an int array for each pointer

        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    int p1, p2;
    for (int i = 0; i < queries; ++i) {
        cin >> p1 >> p2;
        cout << matrix[p1][p2] << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

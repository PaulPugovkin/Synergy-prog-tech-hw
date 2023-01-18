#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int matrix[rows][columns];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int boofer = matrix[i][0];
        matrix[i][0] = matrix[i][columns - 1];
        matrix[i][columns - 1] = boofer;
    }

    cout << "Swap first and last value in the row: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    bool sorting = true;
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

    while (sorting) {
        sorting = false;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (matrix[i][j] > matrix[i][j+1]) {
                    int boofer = matrix[i][j];
                    matrix[i][j] = matrix[i][j+1];
                    matrix[i][j+1] = boofer;
                    sorting = true;
                }
            }
        }
    }

    cout << "The sorted rows: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
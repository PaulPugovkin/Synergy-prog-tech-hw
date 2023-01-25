#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    int matrix[10][10];
    bool sorting = true;
    cout << "Enter the number of rows: ";
    cin >> rows;
    if (rows > 10 || rows <= 0) {
        cout << "Max rows of matrix is 10 and above 0" << endl;
        return 0;
    }
    cout << "Enter the number of columns: ";
    cin >> columns;
    if (columns > 10 || columns < 0) {
        cout << "Max columns of matrix is 10 and above 0" << endl;
        return 0;
    }

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    while (sorting) {
        sorting = false;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns - 1; j++) {
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
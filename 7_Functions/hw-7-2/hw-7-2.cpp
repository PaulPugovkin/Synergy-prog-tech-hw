#include <iostream>
using namespace std;

void fillAndShowArray(int arrayForFilling[], int size) {
    for (int i = 0; i < size; i++)
    {
        arrayForFilling[i] = i + 1;
        cout << arrayForFilling[i] << "  ";
    }
    cout << endl;
}

int main() {
    int arrayForFilling1[10];
    int arrayForFilling2[15];

    fillAndShowArray(arrayForFilling1, 10);
    fillAndShowArray(arrayForFilling2, 15);

    return 0;
}


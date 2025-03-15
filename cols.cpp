#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 16;

    // Membuat array 2D dinamis
    int** dynamicArray = new int*[rows];
    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new int[cols];
    }

    // Mengisi nilai array
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dynamicArray[i][j] = count++;
        }
    }

    // Mencetak array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    // Menghapus memori yang dialokasikan
    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
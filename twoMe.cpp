#include <iostream>

using namespace std;


int main () {
    int hana[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << "Book : " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++) {
            cout << hana [2][3] << " ";
        }
        cout << endl;
    }
    return 0;
}
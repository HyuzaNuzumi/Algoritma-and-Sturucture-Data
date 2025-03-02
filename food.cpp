#include <iostream>
using namespace std;

int main(){
    string snack[30];
    int total;

    cout << "=======[TOKO OWL]=======" << endl;
    cout << "How many snacks do you have?: " ;
    cin >> total;
    cin.ignore();

    cout << "Enter Your Snack Name: " << endl;

    for(int a = 0; a < total; a++){
        cout << a + 1 << ". ";
        getline(cin, snack[a]);
    }
    

    cout << "================================" << endl;
    cout << "Nota Food" << endl;

    for(int b = 0; b < total; b++){
        cout << b + 1 << ". " << snack[b] << endl;
    }
    return 0;
    }

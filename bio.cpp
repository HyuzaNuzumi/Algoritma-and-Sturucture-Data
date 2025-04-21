#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <iomanip>

using namespace std;

struct Data {
    string name;
    string  address;
    int nim;
};

int main () {
    vector<Data> data;
    char replay;

    do {
        Data n;

        cout << "Masukkan Nama: ";
        getline(cin, n.name);

        cout << "Masukkan Address: ";
        getline(cin, n.address);

        cout << "Masukkan Nim: ";
        cin >> n.nim;

        if (cin.fail() || n.nim < 1) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max_digits10), '\n';
            cout << "Invalid Input"<< endl;
            continue;
        }
        cin.ignore(); //Mengabaikan karakter newline setelah input data

        data.push_back(n);

        cout << "\nApakah Anda Ingin Mengisi Daftar Lagi (y/n) :  ";
        cin >> replay;
        cin.ignore(); //mengabaikan karakter newline

    } while (replay == 'y') ;

    cout << "\nBIO DATA" << endl;
    
    cout << setw(20) << left << "Name"
         << setw(30) << left << "Alamat"
         << setw(10) << left << "NIM" << endl;
    cout << setfill('-') << setw(60) << "" << setfill(' ') << endl;

    for (const auto& n : data) {
        cout << setw(20) << left << n.name
            << setw(30) << left << n.address
            << setw(10) << left << n.nim << endl;
    }
    cout << "Terima Kasih" << endl;
    return 0;
};
#include <iostream>
#include <cctype>  // Untuk isdigit
using namespace std;

bool isNumeric(const string& str) {
    for (char const &c : str) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main() {
    string name;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Your Name Is: " << name << endl;

    string NIM;
    cout << "Enter Your NIM: ";
    cin >> NIM;

    if (isNumeric(NIM)) {
        cout << "Your NIM Is: " << NIM << endl;
    } else {
        cout << "Error: NIM should only contain numbers." << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string getName(string message);


int main ()
{
    string name = getName("Enter Your Name: ");
    cout << "Welcome  " << name;
    return 0;
}

string getName(string message) {
    string name;

    cout << message;
    getline(cin, name);

    while  (name.empty()) {
        cout << "Name Cannot be empty, re-enter: ";
        getline(cin, name);
    }

    return name;
}
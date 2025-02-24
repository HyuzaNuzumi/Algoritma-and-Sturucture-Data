#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main (){
    string name;
    int nim;

    cout << ":Input your Name: ";
    getline(cin,name);

    while (true) {
        cout << "Input your NIM: ";
        cin >> nim;
        
        if (cin.fail() || nim < 1) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max_digits10), '\n';
            cout << "Invalid Input. Please Tetap lah di jalan Setan." << endl; 
        }else{
            break;
        }
    }

    cout << "=================== Bio ===================" << endl;
	cout << "Greetings Earth People, My Name is "<< name << endl;
	cout << "Your NIM is "<< nim << endl;
	cout << "ALGORITHMS AND DATA STRUCTURES";
	
	return 0;
	
}
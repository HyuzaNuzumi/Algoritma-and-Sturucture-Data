#include <iostream>

using namespace std;

int main() {
	string name;
	int semester;
	
	cout << "What is Your Name" << endl;
	getline(cin,name);
	
	cout << "What semesters are you in" << endl;
	cin >> semester;
	
	cout << "=================== Bio ===================" << endl;
	cout << "Greetings Earth People, My Name is "<< name << endl;
	cout << "Current Semester "<< semester << endl;
	cout << "ALGORITHMS AND DATA STRUCTURES";
	
	return 0;
	
}

#include <iostream>
#include <string>
using namespace std;

struct microba {
    string genetik_Virus;
    string infeksi;
    int release_year;
};

int main(){
    microba virus;

    virus.genetik_Virus = "Sars-Cov-2";
    virus.infeksi = "Covid-19";
    virus.release_year = 2019;

    cout << "Kode Genetik Virus " << virus.genetik_Virus << endl;
    cout << "Infeksi Virus " << virus.infeksi << endl;
    cout << "Release Year "<< virus.release_year << endl;

    return 0;

}
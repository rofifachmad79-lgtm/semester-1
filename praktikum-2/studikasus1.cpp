#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string nama;
    double jam;
    double tarif;
    cout << "masukkan nama: "; cin >> nama;
    cout << "masukkan jam kerja: "; cin >> jam;
    cout << "masukkan tarif per jam"; cin >> tarif;
    double total = jam*tarif;
    
    cout << left << setw(10) << "Nama" << setw(15) << "Jam Kerja" << setw(15) << "Tarif/jam" << setw(15) << "Total Gaji" << endl;
    cout << setfill ('_') << setw(50) << "" << endl;
    cout << setfill (' ');

    cout << left << setw(10) << nama << setw(15) << jam << setw(15) << tarif << setw(15) << fixed << setprecision(2)<< total;

}
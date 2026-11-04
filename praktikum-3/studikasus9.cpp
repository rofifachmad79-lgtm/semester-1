#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double meter;

    cout << "masukkan panjang (meter): ";
    cin >> meter;

    double milimeter = meter*1000;
    double senti = meter*100;
    double kilometer = meter /1000;

    cout << left << setw(10) << "milimeter" << setw (15) << "sentimeter" << setw(15) << "meter" << setw(15) << "kilometer" << endl;
    cout << setfill('_') << setw(45) << "" <<endl;
    cout << setfill(' ');
    cout << left << setw(10) << milimeter << setw(15) << senti << setw(15) << meter << setw(15) << kilometer;
}

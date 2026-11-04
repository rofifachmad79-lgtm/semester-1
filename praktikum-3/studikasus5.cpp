#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double berat,tinggi;

    cout << "tinggi badan: "; cin >> tinggi;
    cout << "berat badan: "; cin >> berat;

    double n = tinggi/100;
    double bmi = berat/(n*n);

    cout << "bmi: " << fixed << setprecision(2) << endl;

    if (bmi < 18.5) {
        cout << "berat tidak ideal";
    }
    else if (bmi > 25) {
        cout << "berat tidak ideal";
    }
    else {cout << "berat ideal";}

}
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double t,berat;

    cout << "masukkan tinggi: "; cin >> t;
    cout << "masukkan berat: "; cin >> berat;

    double tinggi = t/100;
    double bmi = berat/(tinggi*tinggi);

    cout << "BMI: " << fixed << setprecision(2) << bmi << endl;

    if (bmi < 18.5) {
        cout << "berat tidak ideal" << endl;
    }
    else if (bmi > 24.9) {
        cout << "berat tidak ideal" << endl;
    }
    else {
        cout << "berat ideal";
    }
}
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string absen;
    double jabsen=0;
    double pabsen=jabsen/5;

    for (int i = 1; i <=5; i++) {
        cout << "absensi hari ke-" << i << ": ";
        cin >> absen;

        if (absen == "masuk") {
            jabsen += 1;
        }
    }
    if (pabsen > 3/4) {
        cout << "kehadiran baik";
    }
    else if (pabsen <= 3/4 && pabsen >=1/2) {
        cout << "kehadiran cukup";
    }
    else {cout << "kehadiran kurang";}
}
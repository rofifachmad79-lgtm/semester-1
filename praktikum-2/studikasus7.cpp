#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int jarak,konsumsi,harga;

    cout << "jarak tempuh (km): "; cin >> jarak;
    cout << "konsumsi bahan bakar (km/l): "; cin >> konsumsi;
    cout << "harga bahan bakar (rp/l): "; cin >> harga;

    double biaya = jarak/konsumsi*harga;

    cout << "total biaya bahan bakar: " << biaya;
}
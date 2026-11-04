#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int jarak,konsumsi,harga;

    cout << "jarak: ";
    cin >> jarak;
    cout << "konsumsi bahan bakar per kilometer: ";
    cin >> konsumsi;
    cout << "harga: ";
    cin >> harga;

    int biaya = jarak/konsumsi*harga;

    cout << "biaya perjalanan: " << biaya;

}
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double harga;
    double diskon;

    cout << "masukkan harga barang: "; cin >> harga;
    cout << "masukkan diskon (dalam bentuk persen): "; cin >> diskon;
    
    double potongan=harga*diskon/100;
    double total=harga-potongan;

    cout << "harga setelah diskon adalah: " << fixed << setprecision(2) << total;
}
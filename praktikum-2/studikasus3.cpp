#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int panjang,lebar,tinggi;
    cout << "masukkan panjang: "; cin >> panjang;
    cout << "masukkan lebar: "; cin >> lebar;
    cout << "masukkan tinggi: "; cin >> tinggi;

    int volume = panjang*lebar*tinggi;
    int lp = (panjang*lebar*2)+(panjang*tinggi*2)+(lebar*tinggi*2);

    cout << "volume: " << volume << endl;
    cout << "Luas Permukaan: " << lp;
}
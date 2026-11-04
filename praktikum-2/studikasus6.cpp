#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int jhari;
    double suhu = 0;
    double n = 0;
    cout << "masukkan jumlah hari: "; cin >> jhari;

    for (int i = 1; i <= jhari; i++) {
        cout << "masukkan suhu hari ke-" << i << " "; cin >> n;
        suhu += n; 
    }
    double rsuhu = suhu/jhari;

    cout << "rata-rata suhu: " << rsuhu;
}
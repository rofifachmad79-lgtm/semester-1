#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int jbarang;
    double total = 0, n;
    
    cout << "masukkan jumlah barang: ";
    cin >> jbarang;

    for (int i = 1; i <=jbarang ; i++) {
        cout << "masukkan harga ke-" << i << ": ";
        cin >> n;
        total += n;
    }
    cout << "harga: " << total << endl;
    double harga = total;

    if (total > 500000) {
        harga = total - (total/10);
        cout << "harga setelah diskon: " << harga;
    }
    else if (total <=500000 && total >=250000 ) {
        harga = total - (total/20);
        cout << "harga setelah diskon: " << harga;
    }
}
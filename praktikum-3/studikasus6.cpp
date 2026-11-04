#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double h1,h2,h3,h4,h5,n;
    double total=0;
    double rata= total/5;

    for(int i=1;i < 6;i++) {
        cout << "masukkan hari ke-" << i << ": ";
        cin >> n;
        total += n;
    }
    cout << "suhu rata-rata: " << rata;
}
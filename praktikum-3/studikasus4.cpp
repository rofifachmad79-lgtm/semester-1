#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double rupiah;

    cout << "masukkan nominal rupiah: "; cin >> rupiah;

    double dollar = rupiah/17800;

    cout << "nominal dalam dollar adalah: " << fixed << setprecision(2) << dollar;
}
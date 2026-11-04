#include <iostream>
#include <iomanip>
using namespace std;

int sumdigits (int n) {
    if (n == 0) return 0;
    return (n%10) + sumdigits(n/10); 
}

int main () {
    int n = 222;
    cout << "jumlah digit dari " << n << "adalah: " << sumdigits (n) << endl;
}
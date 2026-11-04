#include <iostream>
#include <iomanip>
using namespace std;

void displayfactorial (int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        cout << "faktorial dari " << i << " adalah " << factorial << endl;
    }
}

int main () {
    int num = 5;
    displayfactorial (num) ;
    return 0;
}
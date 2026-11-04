#include <iostream>
#include <string>
using namespace std;

int calculatesquare(int number) {
    return number *= number;
}

int main () {
    int num = 5;
    calculatesquare(num);
    cout << "kuadrat dari " << num << " adalah " << calculatesquare(num);
    return 0;
}
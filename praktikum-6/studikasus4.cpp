#include <iostream>
using namespace std;

int countdigit (int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n/= 10;
    }
    return count;
}
int main () {
    int number = 123450;
    cout << "jumlah digit: " << countdigit(number) << endl;

    int number2 = 012345;
    cout << "jumlah digit: " << countdigit(number2);
}
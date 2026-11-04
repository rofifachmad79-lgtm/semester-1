#include <iostream>
#include <iomanip>
using namespace std;

void printstars (int n) {
    if (n <= 0) return;
    printstars (n-1);
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}
int main () {
    int rows= 5;
    printstars (rows);
    return 0;
}
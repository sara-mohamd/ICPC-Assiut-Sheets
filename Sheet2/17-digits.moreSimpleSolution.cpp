#include <iostream>
using namespace std;
 
int main(void) {
    short size, digit;
    long long number, n;
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cin >> number;
        if (!number)    cout << "0 ";
        n = number;
        while (n != 0) {
            digit = n % 10;
            n /= 10;
            cout << digit << " ";
        }
        cout << endl;
    }
    return 0;
}
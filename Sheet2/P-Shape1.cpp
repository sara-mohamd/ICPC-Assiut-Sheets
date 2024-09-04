#include <iostream>
using namespace std;
int main() {
    int x ;
    cin >> x;
    for (int i = x; i != 0; i--) {
        int temp = i;
        while(temp) {
            cout << "*";
            temp--;
        }
        cout << endl;
    }
    return 0;
}
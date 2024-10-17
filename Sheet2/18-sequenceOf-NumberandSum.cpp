#include <iostream>
using namespace std;
int main() {
    int x, y;
    while (true) {
        int sum = 0;
        cin >> x >> y;
    if (x <= 0 || y <= 0)   return 0;
    else if (y > x) {
        for (int i = x; i <= y; i++) {
            cout << i << " ";
            sum += i;
        }
    }
    else {
        for (int i = y; i <= x; i++) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "sum =" << sum << endl;
    }
}
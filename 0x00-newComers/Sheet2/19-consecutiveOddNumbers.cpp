#include <iostream>
using namespace std;
int main() {
    int x, y, sum, cases, temp;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        sum = 0;
        cin >> x >> y;
        if (x > y) {
            temp = x;
            x = y;
            y = temp; 
        }
        for (int j = x + 1; j < y; j++) {
            if (j % 2 != 0) 
                sum += j;
        }
        cout << sum << endl;
    }
    return 0;
}
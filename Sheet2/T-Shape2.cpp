#include <iostream>
using namespace std;
int main() {
    int counter;
    cin >> counter;
    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < counter - i - 1; j++)
            cout << " ";
        for (int k = 0; k < 2 * i + 1; ++k)
            cout << "*";
        cout << endl;
    }
    return 0;
}
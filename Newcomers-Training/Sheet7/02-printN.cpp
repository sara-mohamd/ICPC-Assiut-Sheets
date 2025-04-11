#include <iostream>
using namespace std;

void printNumbers(int n, int current = 1) {
    if (current > n)
        return;
    cout << current << endl;
    printNumbers(n, current + 1);
}

int main() {
    int N;
    cin >> N;
    printNumbers(N);
    return 0;
}
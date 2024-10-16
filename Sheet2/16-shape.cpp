#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = x; i != 0; i--)
    {
        for (int j = i; !j; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}
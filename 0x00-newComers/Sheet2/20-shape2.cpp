#include <iostream>
using namespace std;
/**
 * main - function to print a pyramid
 * description: Pyramid structure if 4 :
 *  - 3 spaces - 1*
 *  - 2 spaces - 3*
 *  - 1 spaces - 5*
 *  - 0 space  - 7*
 */

int main()
{

    int counter;
    cin >> counter;
    // 3, 2, 1, 0
    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < counter - i - 1; j++)
            cout << " ";
        // counter = 4
        for (int k = 0; k < 2 * i + 1; ++k)
            cout << "*";
        cout << endl;
    }

    return 0;
}
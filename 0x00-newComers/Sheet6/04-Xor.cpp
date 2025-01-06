#include <iostream>
using namespace std;

int main()
{
  long long a = 5, b = 3, q;
  cin >> a >> b >> q;
  long long res = q % 3;
  if (res == 1)
    cout << a;
  else if (res == 2)
    cout << b;
  else if (res == 0)
    cout << (a ^ b);
}
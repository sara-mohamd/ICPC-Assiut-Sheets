#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n > 0)
    cout << n << endl;
  else
  {
    int d1, d2;
    d1 = n % 10;
    n /= 10;
    d2 = n % 10;
    n /= 10;
    if (abs(d1) > abs(d2))
      n = n * 10 + d2;
    else
      n = n * 10 + d1;
    cout << n << endl;
  }
  return 0;
}
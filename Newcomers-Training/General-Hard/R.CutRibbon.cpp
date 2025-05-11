#include <bits/stdc++.h>
using namespace std;

int main()
{
  int L, a, b, c, mx = 0;
  cin >> L >> a >> b >> c;

  for (int i = 0; i <= L; i += a)
  {
    for (int j = 0; j <= L - i; j += b)
    {
      int x = L - (i + j);
      if (x % c == 0)
        mx = max(mx, i / a + j / b + x / c);
    }
  }
  cout << mx;
}
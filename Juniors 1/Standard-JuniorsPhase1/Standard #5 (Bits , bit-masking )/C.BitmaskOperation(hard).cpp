#include <bits/stdc++.h>
// #define int long long
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }
signed main()
{
  fast();
  int q, n;
  cin >> n >> q;
  while (q--)
  {
    int c;
    cin >> c;
    switch (c)
    {
    case 1:
      for (int bit = 0; bit <= 31; bit++)
      {
        if ((n & (1 << bit)))
          continue;
        n = (n | (1 << bit));
        break;
      }
      cout << n << '\n';
      break;
    case 2:
      for (int bit = 0; bit <= 31; bit++)
      {
        if (!(n & (1 << bit)))
          continue;
        ;
        n = (n & ~(1 << bit));
        break;
      }
      cout << n << '\n';
      break;
    case 3:
      if (n == 0)
        n = -1;
      else
        for (int bit = 0; bit <= 31; bit++)
        {
          if ((n & (1 << bit)))
            break;
          n = (n | (1 << bit));
        }
      cout << n << '\n';
      break;
    case 4:
      for (int bit = 0; bit <= 31; bit++)
      {
        if (!(n & (1 << bit)))
          break;
        n = (n & ~(1 << bit));
      }
      cout << n << '\n';
      break;
    default:
      int cnt = 0;
      int temp = n;
      if (temp == 1)
        cnt = 1;
      else
      {
        while (temp)
          cnt += temp % 2, temp /= 2;
      }
      (cnt == 1) ? cout << "is power of two\n" : cout << "not power of two\n";

      break;
    }
  }
  return 0;
}

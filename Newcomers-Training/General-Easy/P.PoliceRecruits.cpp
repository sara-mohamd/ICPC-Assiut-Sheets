#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, ones = 0, ans = 0, x;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (x == -1)
    {
      if (ones > 0)
        ones -= 1;
      else
        ans++;
    }
    else
      ones += x;
  }
  cout << ans << endl;
}
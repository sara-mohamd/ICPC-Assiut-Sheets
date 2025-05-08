#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    long long n, s, val = 0, ok = 0;
    cin >> n >> s;
    long long pref[n + 1] = {0};
    for (int i = 1; i <= n; i++)
      pref[i] = i + pref[i - 1];
    int i = 1;
    for (; i <= n; i++)
    {
      if (pref[i] >= s)
      {
        ok = 1;
        val = pref[i] - s;
        break;
      }
    }
    if (ok)
    {
      (val == 0) ? cout << i : cout << i - 1;
      for (int j = 1; j <= i; j++)
      {
        if (j != val)
        {
          cout << ' ' << j;
        }
      }
      cout << endl;
    }
    else
      cout << "-1\n";
  }
}
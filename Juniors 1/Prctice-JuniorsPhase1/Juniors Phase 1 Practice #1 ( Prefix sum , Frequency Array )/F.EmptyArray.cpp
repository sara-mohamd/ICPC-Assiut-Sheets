#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x = 0, mx = 0, freq[100006] = {0}, mn = INT_MAX;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (mx < x)
      mx = x;
    if (mn > x)
      mn = x;
    freq[x]++;
  }
  while (n)
  {
    for (int i = mn; i <= mx; i++)
    {
      if (freq[i] > 0)
      {
        cout << i << ' ';
        freq[i]--;
        n--;
      }
    }
    cout << endl;
  }
}
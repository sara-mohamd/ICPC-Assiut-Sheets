#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, x;
  cin >> n >> m;
  int freq[100006] = {0}, prefix[n] = {0};
  int a[n + 1] = {0};
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for (int i = n; i > 0; i--)
  {
    if (freq[a[i]] == 0)
    {
      freq[a[i]] = 1;
      prefix[i] = 1;
    }
  }
  for (int i = n - 1; i > 0; i--)
  {
    prefix[i] += prefix[i + 1];
    // cout << prefix[i] << endl;
  }
  while (m--)
  {
    cin >> x;
    cout << prefix[x] << endl;
  }
}
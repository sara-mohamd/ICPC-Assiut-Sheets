#include <bits/stdc++.h>
using namespace std;
int freq[1006];
int main()
{
  int n, ok = 1, var, num;
  cin >> n;
  num = n / 2;
  if (n % 2 != 0)
    num += 1;
  for (int i = 0; i < n; i++)
  {
    cin >> var;
    if (++freq[var] > num)
      ok = 0;
  }
  if (ok)
    cout << "YES\n";
  else
    cout << "NO\n";
}
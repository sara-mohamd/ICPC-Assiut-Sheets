#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, ctr = 1;
  cin >> n;
  string a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (i == 0)
      continue;
    if (a[i][0] == a[i - 1][1])
      ctr++;
  }
  cout << ctr << endl;
}
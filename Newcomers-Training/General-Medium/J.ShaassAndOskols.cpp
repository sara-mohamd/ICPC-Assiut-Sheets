#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  int x, y;
  cin >> n;
  int a[n + 2] = {0};
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  cin >> m;
  while (m--)
  {
    cin >> x >> y;
    a[x - 1] += y - 1;
    a[x + 1] += a[x] - y;
    a[x] = 0;
  }
  for (int i = 1; i <= n; i++)
    cout << a[i] << endl;
}
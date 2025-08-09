#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n, temp, count = 0;
  cin >> n;
  for (int i = 1; i < n; i++)
  {
    if ((i * 2) >= n)
      continue;
    temp = n - (i * 2), count = i;
    while (count--)
      cout << '*';
    while (temp--)
      cout << ' ';
    count = i;
    while (count--)
      cout << '*';
    cout << '\n';
  }
  for (int i = 0; i < n; i++)
  {
    cout << '*';
  }
  cout << '\n';
  for (int i = n - 1; i > 0; i--)
  {
    if ((i * 2) >= n)
      continue;
    temp = n - (i * 2), count = i;
    while (count--)
      cout << '*';
    while (temp--)
      cout << ' ';
    count = i;
    while (count--)
      cout << '*';
    cout << '\n';
  }
}
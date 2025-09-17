#include <bits/stdc++.h>
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

int main()
{
  fast();
  int n;
  string a, b;
  cin >> n >> a >> b;
  if (a[0] > b[0])
  {
    if (n == 2)
      cout << (a[1] >= b[1]) ? "YES\n1 2\n" : "NO\n";
    else
      cout << "YES\n2 3\n";
    return 0;
  }
  for (int i = 1; i < n; i++)
  {
    if (a[i] > b[i])
    {
      cout << "YES\n"
           << "1 " << i + 1 << '\n';
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}

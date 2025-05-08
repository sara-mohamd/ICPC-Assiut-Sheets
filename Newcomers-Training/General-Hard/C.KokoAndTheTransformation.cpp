#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a = 0, b = 0, x;
  int n, m;
  cin >> n >> m;
  while (n--)
  {
    cin >> x;
    a += x;
  }
  while (m--)
  {
    cin >> x;
    b += x;
  }
  if (a == b)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}
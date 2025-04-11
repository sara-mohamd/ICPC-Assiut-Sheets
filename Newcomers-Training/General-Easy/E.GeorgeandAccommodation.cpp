#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, p, q, ctr = 0;
  cin >> n;
  while (n--)
  {
    cin >> p >> q;
    if (p + 2 <= q)
      ctr++;
  }
  cout << ctr << endl;
}
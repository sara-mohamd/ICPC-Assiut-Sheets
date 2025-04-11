#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, b, d, sum = 0, ctr = 0;
  cin >> n >> b >> d;
  int a[n] = {0};
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i : a)
  {
    if (i > b)
      continue;
    sum += i;
    if (sum > d)
    {
      sum = 0;
      ctr++;
    }
  }
  cout << ctr << endl;
}
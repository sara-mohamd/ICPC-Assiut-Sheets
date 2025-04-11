#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a, b, ctr = 0;
  cin >> a >> b;
  while (b >= a)
  {
    b *= 2;
    a *= 3;
    ctr++;
  }
  cout << ctr << endl;
}
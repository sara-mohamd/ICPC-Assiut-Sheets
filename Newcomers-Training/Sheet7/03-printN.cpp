#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
  if (n > 0)
  {
    cout << n;
    if (n != 1)
      cout << ' ';
    print(--n);
  }
}
int main()
{
  int n;
  cin >> n;
  print(n);
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int p[52] = {0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0};
  int test;
  cin >> test;
  while (test--)
  {
    int n;
    cin >> n;
    if (p[n - 1])
      cout << "prime\n";
    else
      cout << "not prime\n";
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < 15; i++)
  {
    if (arr[i] != n)
      continue;
    if (arr[i + 1] == m)
      cout << "YES\n";
    else
      cout << "NO\n";
    break;
  }
}
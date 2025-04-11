#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, minVal = 200, maxIdx = 0, ctr = 0, mnIdx = 0;
  cin >> n;
  int a[n + 1] = {0};
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    if (a[i] > a[maxIdx])
    {
      maxIdx = i;
    }
    if (a[i] <= minVal)
    {
      minVal = a[i];
      mnIdx = i;
    }
  }
  // cout << mnIdx << ' ' << maxIdx << endl;
  for (int i = mnIdx; i < n; i++)
  {
    swap(a[i], a[i + 1]);
    ctr++;
    if (a[i + 1] == a[maxIdx])
      maxIdx = i;
  }
  // cout << maxIdx << endl;
  // cout << "---------------\n";
  for (int i = maxIdx; i > 1; i--)
  {
    swap(a[i], a[i - 1]);
    ctr++;
  }
  // for (int i = 1; i <= n; i++)
  // {
  //   cout << a[i] << ' ';
  // }
  cout << '\n'
       << ctr << endl;
}
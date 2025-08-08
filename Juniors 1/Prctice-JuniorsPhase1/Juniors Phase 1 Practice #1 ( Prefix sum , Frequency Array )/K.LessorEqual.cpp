#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 2, 0);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  a[n + 1] = a[n] - 1;
  sort(a.begin(), a.end() - 1);

  if (k == 0)
  {
    if (a[1] != 1)
      cout << "1\n";
    else
      cout << "-1\n";
  }
  else if (a[k] != a[k + 1])
    cout << a[k] << endl;
  else
    cout << "-1\n";
}
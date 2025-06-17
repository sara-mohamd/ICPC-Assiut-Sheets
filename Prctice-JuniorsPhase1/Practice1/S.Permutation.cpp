#include <bits/stdc++.h>
using namespace std;

int main()
{

  freopen("mex.in", "r", stdin);
  int test;
  cin >> test;
  while (test--)
  {
    int n, q;
    cin >> n >> q;
    int arr[n + 1] = {0},
                prefix[n + 2] = {INT_MAX},
                suffix[n + 2] = {INT_MAX};
    for (int i = 1; i <= n; i++)
      cin >> arr[i];
    for (int i = 1; i <= n; i++)
    {
      if (arr[i] < prefix[i - 1])
        prefix[i] = arr[i];
      else
        prefix[i] = prefix[i - 1];
    }

    suffix[n] = arr[n];
    for (int i = n - 1; i > 0; i--)
    {
      if (arr[i] < suffix[i + 1])
        suffix[i] = arr[i];
      else
        suffix[i] = suffix[i + 1];
    }

    while (q--)
    {
      int l, r;
      cin >> l >> r;
      if (l > r)
        swap(l, r);
      if (r >= n && l == 1)
        cout << n + 1 << endl;
      else if (r == n)
        cout << prefix[l - 1] << endl;
      else if (l == 1)
        cout << suffix[r + 1] << endl;
      else
        cout << min(prefix[l - 1], suffix[l + 1]) << endl;
    }
  }
}

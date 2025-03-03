#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  int arr[n];
  set<int> seen;
  vector<int> res;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (seen.find(arr[i]) == seen.end())
    {
      seen.insert(arr[i]);
      res.push_back(arr[i]);
    }
  }

  sort(res.begin(), res.end());
  while (q--)
  {
    int num, mi = 0, mx = 0;
    cin >> num;

    for (int i = 0; i < res.size(); i++)
    {
      // re [ 1, 2, 3, 4, 5] n = 5;
      if (res[i] == num)
      {
        mi = i;
        break;
      }
    }
    cout << mi << " " << res.size() - mi - 1 << endl;
  }
}
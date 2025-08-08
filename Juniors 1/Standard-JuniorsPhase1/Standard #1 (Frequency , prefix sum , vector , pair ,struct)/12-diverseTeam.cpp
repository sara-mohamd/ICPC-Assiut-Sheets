#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  set<int> seen;
  vector<int> res;
  int temp = 0;

  for (int i = 0; i < n; i++)
  {
    if (seen.find(arr[i]) == seen.end())
    {
      res.push_back(i + 1);
      seen.insert(arr[i]);
      temp++;
    }
  }

  if (temp < t)
    cout << "NO";
  else
  {
    cout << "YES" << endl;
    for (int i = 0; i < t; i++)
      cout << res[i] << ' ';
  }

  return 0;
}
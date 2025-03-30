#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, k, ctr = 0;
  cin >> n >> k;
  map<int, int> mp;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }

  for (int i = 0; i < n; i++)
  {
    if (mp[k - arr[i]] > 0)
    {
      mp[arr[i]]--;
      ctr += mp[k - arr[i]];
    }
  }
  cout << ctr << endl;
}
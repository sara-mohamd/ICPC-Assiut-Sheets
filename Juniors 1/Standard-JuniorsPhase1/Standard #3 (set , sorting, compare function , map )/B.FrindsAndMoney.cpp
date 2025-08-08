#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q, salary, idx = 0;
  cin >> n >> q;
  string name;
  map<string, long long> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> name >> salary;
    mp[name] = salary;
  }
  while (q--)
  {
    cin >> idx >> name;
    if (idx == 1)
    {
      cin >> salary;
      mp[name] += salary;
    }
    else
      cout << mp[name] << endl;
  }
}
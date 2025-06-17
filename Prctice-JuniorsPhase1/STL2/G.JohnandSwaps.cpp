#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int n, ctr = 0;
    cin >> n;
    map<vector<int>, int> mp;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
      cin >> v[i];

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        vector<int> t = v;
        swap(t[i], t[j]);
        if (mp[t] == 0)
        {
          ctr++;
          mp[t] = 1;
        }
      }
    }
    cout << ctr << '\n';
  }
}
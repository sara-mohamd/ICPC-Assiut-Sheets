#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int q;
  cin >> q;
  while (q--)
  {
    long long n, res = 0, x;
    multiset<int> mst;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      mst.insert(x);
      if (x == 0)
      {
        res += *mst.rbegin();
        mst.erase(prev(mst.end()));
      }
    }
    cout << res << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int q, x;
  cin >> q;
  while (q--)
  {
    int n;
    set<int> st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      st.insert(x);
    }
    if (st.size() <= 1)
      cout << "-1\n";
    else
    {
      auto it = st.rbegin();
      it++;
      cout << *it << endl;
    }
  }
}
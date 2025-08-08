#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q, x;
  cin >> q;
  set<int> st;
  string s;
  while (q--)
  {
    cin >> s;
    if (s == "find")
    {
      cin >> x;
      if (st.find(x) != st.end())
        cout << "found\n";
      else
        cout << "not found\n";
    }
    else if (s == "lower_bound")
    {
      cin >> x;
      set<int>::iterator it = st.lower_bound(x);
      if (it == st.end())
        cout << "-1\n";
      else
        cout << *it << endl;
    }
    else if (s == "upper_bound")
    {
      cin >> x;
      set<int>::iterator it = st.upper_bound(x);
      if (it == st.end())
        cout << "-1\n";
      else
        cout << *it << endl;
    }
    else if (s == "insert")
    {
      cin >> x;
      st.insert(x);
    }
  }
}
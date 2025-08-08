#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  string s;
  cin >> s;
  stack<char> st;
  int idx = 1;
  for (auto c : s)
  {
    if (c == ')' || c == ']' || c == '}')
    {
      if (st.empty())
      {
        idx = 0;
        break;
      }
      // {[()
      char ch = st.top();
      if (c == ')')
      {
        if (ch != '(')
        {
          idx = 0;
          break;
        }
      }
      if (c == ']')
      {
        if (ch != '[')
        {
          idx = 0;
          break;
        }
      }
      if (c == '}')
      {
        if (ch != '{')
        {
          idx = 0;
          break;
        }
      }
      st.pop();
    }
    else
      st.push(c);
  }
  if (idx)
    cout << "Yes\n";
  else
    cout << "No\n";
}
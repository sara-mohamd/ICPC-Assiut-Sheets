#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, next = 1, flag = 1;
    cin >> n;
    queue<int> q;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      q.push(x);
    }
    while (!q.empty())
    {
      if (q.front() == next)
      {
        next++;
        q.pop();
      }
      else if (!st.empty() && st.top() == next)
      {
        st.pop();
        next++;
      }
      else if (st.empty() || (!st.empty() && st.top() > q.front()))
      {
        st.push(q.front());
        q.pop();
      }
      else
      {
        q.pop();
        flag = 0;
      }
    }
    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
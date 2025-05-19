#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<string> st;
  int n, ok = 1, header = 0;
  cin >> n;
  while (n--)
  {
    if (!st.empty())
      if (n < 1 && st.top() != "Header")
        ok = 0;
    string s;
    cin >> s;
    if (s[0] == 'E' && !st.empty())
    {
      if (s[3] != st.top()[0])
        ok = 0;
      else
        st.pop();
    }
    else
    {
      st.push(s);
      if (s[0] == 'H')
        header++;
    }
  }

  if (ok && st.empty() && header == 1)
    cout << "ACC\n";
  else
    cout << "WA\n";
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<char> st;
  string s;
  int ctr = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '(')
      st.push(s[i]);
    else if (!st.empty())
    {
      ctr += 2;
      st.pop();
    }
  }

  cout << ctr << endl;
  return 0;
}
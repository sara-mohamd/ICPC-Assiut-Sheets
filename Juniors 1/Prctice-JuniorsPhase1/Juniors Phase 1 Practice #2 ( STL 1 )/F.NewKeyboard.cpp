#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  string s;
  while (cin >> s)
  {
    int flag = 0;
    list<char>
        ll;
    auto it = ll.begin();
    auto end = ll.end();
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '[')
        flag = 1;
      else if (s[i] == ']')
        flag = 0;
      if (s[i] != '[' && s[i] != ']')
      {
        if (flag)
          ll.insert(it, s[i]);
        else
          ll.insert(end, s[i]);
      }
    }
    for (auto c : ll)
      cout << c;
    cout << '\n';
  }
}
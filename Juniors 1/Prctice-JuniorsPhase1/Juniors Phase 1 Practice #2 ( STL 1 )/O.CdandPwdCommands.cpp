#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin >> q;
  deque<string> dq;
  while (q--)
  {
    string s1;
    cin >> s1;
    if (s1 == "pwd")
    {
      if (dq.empty())
        cout << "/\n";
      else
      {
        for (auto i : dq)
        {
          cout << "/" << i;
        }
        cout << "/\n";
      }
    }
    if (s1 == "cd")
    {
      string s, word = "";
      cin >> s;
      for (int i = 0; i < s.length(); i++)
      {
        if (s[0] == '/' && i == 0)
        {
          if (!dq.empty())
            dq.clear();
          continue;
        }
        if (s[i] == '/')
        {
          dq.push_back(word);
          word = "";
          continue;
        }
        if (s[i] == '.' && i + 1 < s.length() && s[i + 1] == '.')
        {
          i += 2;
          word = "";
          dq.pop_back();
          continue;
        }
        word += s[i];
      }
      if (word.length() > 0)
        dq.push_back(word);
    }
  }
}
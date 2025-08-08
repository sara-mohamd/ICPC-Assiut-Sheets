#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, q, l, r, i;
  string s, op;
  cin >> n >> q >> s;
  while (q--)
  {
    cin >> op;
    if (op == "pop_back")
      s.pop_back();

    else if (op == "front")
    {
      if (!s.empty())
        cout << s.front() << endl;
    }

    else if (op == "back")
    {
      if (!s.empty())
        cout << s.back() << endl;
    }

    else if (op == "sort")
    {
      cin >> l >> r;
      if (l > r)
        swap(l, r);
      sort(s.begin() + --l, s.begin() + r);
    }

    else if (op == "reverse")
    {
      cin >> l >> r;
      if (l > r)
        swap(l, r);
      reverse(s.begin() + --l, s.begin() + r);
    }

    else if (op == "substr")
    {
      cin >> l >> r;
      if (l > r)
        swap(l, r);
      l--;
      cout << s.substr(l, r - l) << endl;
    }

    else if (op == "print")
    {
      cin >> i;
      cout << s[i - 1] << endl;
    }

    else if (op == "push_back")
    {
      char c;
      cin >> c;
      s.push_back(c);
    }
  }
}
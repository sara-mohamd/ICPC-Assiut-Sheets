#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<char> ll;
  string s;
  cin >> s;
  for (char c : s)
  {
    if (ll.empty())
      ll.push_back(c);
    else
    {
      if (ll.back() == c)
        ll.pop_back();
      else
        ll.push_back(c);
    }
  }
  for (auto c : ll)
    cout << c;
}
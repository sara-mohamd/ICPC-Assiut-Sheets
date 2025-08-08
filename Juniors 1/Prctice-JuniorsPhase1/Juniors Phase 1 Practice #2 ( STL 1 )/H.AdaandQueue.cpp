#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  deque<int> dq;
  int query;
  cin >> query;
  while (query--)
  {
    string s;
    int x;
    cin >> s;
    if (s == "front")
    {
      if (dq.empty())
        cout << "No job for Ada?\n";
      else
      {
        cout << dq.front() << '\n';
        dq.pop_front();
      }
    }

    if (s == "back")
    {
      if (dq.empty())
        cout << "No job for Ada?\n";
      else
      {
        cout << dq.back() << '\n';
        dq.pop_back();
      }
    }
    if (s == "reverse")
    {
      reverse(dq.begin(), dq.end());
    }
    if (s == "toFront")
    {
      cin >> x;
      dq.push_front(x);
    }
    if (s == "push_back")
    {
      cin >> x;
      dq.push_back(x);
    }
  }
}
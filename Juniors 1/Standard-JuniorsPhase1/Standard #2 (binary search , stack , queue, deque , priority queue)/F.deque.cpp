#include <bits/stdc++.h>
using namespace std;

int main()
{
  deque<int> dq;
  string command = "";
  int q, x;
  cin >> q;
  while (q--)
  {
    cin >> command;
    if (command == "push_back")
    {
      cin >> x;
      dq.push_back(x);
    }
    else if (command == "push_front")
    {
      cin >> x;
      dq.push_front(x);
    }
    else if (command == "pop_front")
    {
      dq.pop_front();
    }
    else if (command == "pop_back")
    {
      dq.pop_back();
    }
    else if (command == "front")
    {
      cout << dq.front() << endl;
    }
    else if (command == "back")
    {
      cout << dq.back() << endl;
    }
    else if (command == "print")
    {
      cin >> x;
      cout << dq[--x] << endl;
    }
  }
}
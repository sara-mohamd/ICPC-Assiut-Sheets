#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> qu;
  string command;
  int q, n;
  cin >> q;
  while (q--)
  {
    cin >> command;
    if (command == "push")
    {
      cin >> n;
      qu.push(n);
    }
    else if (command == "pop")
    {
      qu.pop();
    }
    else if (command == "front")
    {
      cout << qu.front() << endl;
    }
    else if (command == "back")
    {
      cout << qu.back() << endl;
    }
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q, x;
  string command;
  cin >> q;
  stack<int> st;
  while (q--)
  {
    cin >> command;
    if (command == "push")
    {
      cin >> x;
      st.push(x);
    }
    else if (command == "pop")
      st.pop();
    else
      cout << st.top() << endl;
  }
}
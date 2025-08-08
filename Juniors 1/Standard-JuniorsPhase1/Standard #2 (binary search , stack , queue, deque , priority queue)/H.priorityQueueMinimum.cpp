#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n;
  priority_queue<int, vector<int>,
                 greater<int>>
      pq;
  string s;
  while (n--)
  {
    cin >> s;
    if (s == "push")
    {
      cin >> x;
      pq.push(x);
    }
    if (s == "pop")
    {
      pq.pop();
    }
    if (s == "top")
    {
      cout << pq.top() << endl;
    }
  }
}

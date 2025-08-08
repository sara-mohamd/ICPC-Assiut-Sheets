#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> que;
  int num;
  cin >> num;
  while (num--)
  {
    int n, x;
    cin >> n >> x;
    if (n == 1)
      que.push(x);
    else
    {
      if (x == que.front())
        cout << "Yes\n";
      else
        cout << "No\n";
      que.pop();
    }
  }
  return 0;
}
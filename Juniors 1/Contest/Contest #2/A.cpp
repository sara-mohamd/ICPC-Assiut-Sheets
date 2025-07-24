#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  speed();
  int q, x, mx = -1e18;
  cin >> q;
  stack<int> _stack, monoStack;
  while (q--)
  {
    char op;
    cin >> op;
    if (op == '1')
    {
      cin >> x;
      if (x > mx)
        mx = x;
      _stack.push(x), monoStack.push(mx);
    }
    else
    {
      _stack.pop(), monoStack.pop();
      mx = monoStack.top();
    }
    cout << monoStack.top() << '\n';
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q, x;
  cin >> n;
  deque<int> dq;
  priority_queue<int> pq;
  while (n--)
  {
    cin >> x;
    dq.push_back(x);
  }
  cin >> q;
  while (q--)
  {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    char c;
    cin >> c;
    if (!dq.empty() && c == 'L')
    {
      pq.push(dq.front());
      dq.pop_front();
    }
    else if (!dq.empty() && c == 'R')
    {
      pq.push(dq.back());
      dq.pop_back();
    }
    else if (!pq.empty() && c == 'Q')
    {
      cout << pq.top() << '\n';
      pq.pop();
    }
    else if (c == 'Q' && pq.empty())
      cout << "-1\n";
  }
}
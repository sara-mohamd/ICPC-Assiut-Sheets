#include <bits/stdc++.h>
using namespace std;

void speed() { ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); }
int main()
{
  speed();
  int test;
  cin >> test;
  while (test--)
  {
    int n, range, position;
    cin >> n >> range >> position;
    vector<int> v(n), ans(1);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
      pq.push(v[i]);
      if (pq.size() == range)
        ans.push_back(pq.top()), pq.pop();
    }
    while (!pq.empty())
      ans.push_back(pq.top()), pq.pop();
    cout << ans[position] << '\n';
  }
}
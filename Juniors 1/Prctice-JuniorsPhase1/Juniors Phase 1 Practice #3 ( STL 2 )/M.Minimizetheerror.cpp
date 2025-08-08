#include <bits/stdc++.h>
#define long long int
using namespace std;

void speed()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}

signed main()
{
  speed();
  int n, k1, k2;
  cin >> n >> k1 >> k2;
  vector<int> A(n), B(n);
  priority_queue<int> pq;

  for (int i = 0; i < n; i++)
    cin >> A[i];
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
    pq.push(abs(A[i] - B[i]));
  }

  int total_ops = k1 + k2;
  while (total_ops--)
  {
    int top = pq.top();
    pq.pop();
    (top > 0) ? abs(top - 1) : abs(top + 1);
    pq.push(top);
  }

  int result = 0;
  while (!pq.empty())
  {
    int d = pq.top();
    pq.pop();
    result += d * d;
  }

  cout << result << '\n';
  return 0;
}

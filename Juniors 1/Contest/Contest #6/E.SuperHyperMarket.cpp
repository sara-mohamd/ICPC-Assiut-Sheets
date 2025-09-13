#include <bits/stdc++.h>
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }
struct Queue
{
  int size = 0, last1 = 0, last2 = 0;
  double getX() const
  {
    double p = 0.0;
    if (size == 0)
      p = 0;
    else if (size == 1)
      p = last1;
    else
      p = (last1 + last2) / 2.0;
    return size * p;
  }
};
int main()
{
  int n, k;
  cin >> n >> k;
  vector<Queue> queues(k);
  vector<int> v(n), answer(n);
  for (auto &i : v)
    cin >> i;

  multiset<tuple<double, int>> ms;
  for (int i = 1; i <= k; i++)
    ms.insert({0, i});

  for (int i = 0; i < n; i++)
  {
    auto it = ms.begin();
    auto [xVal, idx] = *it;
    ms.erase(*it);
    Queue &q = queues[idx - 1];
    q.size++;
    q.last2 = q.last1;
    q.last1 = v[i];
    // swap(q.last1, q.last2);
    // swap(q.last1, v[i]);

    double new_x = q.getX();
    ms.insert({new_x, idx}), answer[i] = idx;
  }
  for (auto i : answer)
    cout << i << ' ';
  cout << '\n';
}
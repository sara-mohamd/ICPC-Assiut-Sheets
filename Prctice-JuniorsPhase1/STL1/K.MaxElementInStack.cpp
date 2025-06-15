#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  long long n, x, temp;
  stack<pair<long long, long long>> st;
  cin >> n;
  while (n--)
  {
    cin >> x;
    if (x == 1)
    {
      long long i;
      cin >> i;
      temp = i;
      if (!st.empty())
        temp = max(temp, st.top().second);
      st.push({i, temp});
    }
    if (x == 2)
    {
      st.pop();
    }
    cout << st.top().second << '\n';
  }
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void speed() { ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); }

int main()
{
  speed();
  ll q, t = 1, ctr = 0, idx = 1;
  cin >> q;
  stack<ll> st;
  while (q--)
  {
    string s;
    cin >> s;
    if (s == "for")
    {
      ll x;
      cin >> x;
      if (st.empty())
      {
        st.push(x);
      }
      else
      {
        if (st.top() * x > (pow(2, 32) - 1))
          st.push(pow(2, 32));
        else
        {
          st.push(st.top() * x);
        }
      }
    }
    if (!st.empty())
    {
      if (st.top() == pow(2, 32))
        idx = 0;
      else
        idx = 1;
    }
    if (s == "add" && idx)
    {
      if (st.empty())
      {
        ctr += 1;
      }
      else if (st.top() < pow(2, 32))
        ctr += st.top();
    }
    if (s == "end")
    {
      st.pop();
    }
    if (ctr > (pow(2, 32) - 1))
    {
      idx = 0;
    }
  }
  if (idx)
    cout << ctr << '\n';
  else
    cout << "OVERFLOW!!!\n";
}
#include <bits/stdc++.h>
using namespace std;
void fast()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
int main()
{
  fast();
  int n, q, l1, l2;
  cin >> n >> q;
  vector<long long> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];
  while (q--)
  {
    string s;
    cin >> s;
    if (s == "sort")
    {
      cin >> l1 >> l2;
      sort(v.begin() + l1 - 1, v.begin() + l2);
    }
    else if (s == "reverse")
    {
      cin >> l1 >> l2;
      reverse(v.begin() + l1 - 1, v.begin() + l2);
    }
    else if (s == "push_back")
    {
      cin >> l1;
      v.push_back(l1);
    }
    else if (s == "pop_back")
    {
      v.pop_back();
    }
    else if (s == "back")
    {
      cout << v.back() << endl;
    }
    else if (s == "front")
    {
      cout << v.front() << endl;
    }
    else if (s == "print")
    {
      cin >> l1;
      cout << v[l1 - 1] << endl;
    }
  }
}
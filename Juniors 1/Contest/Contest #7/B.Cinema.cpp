#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int test;
  cin >> test;
  while (test--)
  {
    int n, k;
    string s;
    cin >> n >> k >> s;
    k++;
    int size = 0;
    for (auto c : s)
    {
      (c == '1') ? size = 0 : size++;
      if (size >= k)
        break;
    }
    cout << ((size >= k) ? "yes\n" : "no\n");
  }
  return 0;
}

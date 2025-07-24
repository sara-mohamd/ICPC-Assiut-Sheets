#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  speed();
  int A, B, T;
  cin >> A >> B >> T;
  cout << (T / A) * B << '\n';
}
#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
    int x, y;
    cin >> x >> y;
    cout << x << ' ' << y << ' ' <<  x + y - 1 << '\n';
    cout <<(x + y - 1) / y << " " <<(x % y == 0? y : x % y) << endl;
}

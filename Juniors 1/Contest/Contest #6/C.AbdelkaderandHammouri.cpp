#include <bits/stdc++.h>
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int num;
  string color;
  cin >> num >> color;
  if (num % 2 == 0)
    (color == "White") ? cout << "Black\n" : cout << "White\n";
  else
    cout << color << '\n';
  return 0;
}
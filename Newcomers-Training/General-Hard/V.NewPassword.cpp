#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, idx = 0;
  cin >> n >> k;
  string s = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < n; i++)
  {
    cout << s[idx++];
    if (idx == k)
      idx = 0;
  }
  cout << endl;
}
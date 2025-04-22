#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  if (to_string(n * m).length() > n)
    cout << "-1\n";
  else
  {
    string s2 = to_string(n * m);
    int size = s2.length();
    for (int i = 0; i < n - size; i++)
    {
      s2 += '0';
    }
    cout << s2 << endl;
  }
}
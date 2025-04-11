#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, idx = 1, flag = 0, memory = INT_MAX;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    if (a != b)
      flag = 1;
    else if (memory < a)
      idx = 0;
    memory = a;
  }
  if (flag)
    cout << "rated\n";
  else if (idx)
    cout << "maybe\n";
  else
    cout << "unrated\n";
}
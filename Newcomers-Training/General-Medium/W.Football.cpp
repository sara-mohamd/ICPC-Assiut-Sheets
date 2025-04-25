#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  pair<string, int> t1, t2;
  t1.first = "", t2.first = "";
  t1.second = 0, t2.second = 0;

  while (n--)
  {
    string s;
    cin >> s;
    if (t1.first == "")
    {
      t1.first = s;
      t1.second++;
    }
    else if (t1.first == s)
      t1.second++;
    else if (t2.first == "")
    {
      t2.first = s;
      t2.second++;
    }
    else
      t2.second++;
  }
  (t1.second > t2.second) ? cout << t1.first << endl : cout << t2.first << endl;
}
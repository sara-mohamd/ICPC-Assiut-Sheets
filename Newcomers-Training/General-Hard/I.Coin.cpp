#include <bits/stdc++.h>
using namespace std;
int idx(char c) {
  if(c == 'A')
  return 0;
  else if(c == 'B')
    return 1;
  else
  return 2;
}
int main()
{
  int init = 0, i = 0;
  string comp[3];
  vector<pair<char, int>> stmt(3);
  stmt[0] = {'A', 0};
  stmt[1] = {'B', 0};
  stmt[2] = {'C', 0};
  cin >> comp[0] >> comp[1] >> comp[2];

    int c1 = idx(comp[0][0]);
    int c2 = idx(comp[0][2]);
    if(comp[0][1] == '>') {
      if(stmt[c2].second == 0 && stmt[c1].second == 0)
        stmt[c2].second = init;
      if(stmt[c2].second == 0 && stmt[c1].second == 0)
        stmt[c1].second = ++init;
    }
}
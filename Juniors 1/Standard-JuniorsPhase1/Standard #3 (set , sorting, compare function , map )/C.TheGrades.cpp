#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
bool cmp(pair<vector<int>, string> &a, pair<vector<int>, string> &b)
{
  if (abs(a.first[4] - b.first[4]) <= 10)
    return a.second < b.second;
  return a.first[4] > b.first[4];
}

int main()
{
  int n;
  cin >> n;
  string name;
  map<vector<int>, string> mp;
  vector<int> v(5, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> name >> v[0] >> v[1] >> v[2] >> v[3];
    v[4] = v[0] + v[1] + v[2] + v[3];
    mp[v] = name;
  }
  vector<pair<vector<int>, string>> students(mp.begin(), mp.end());
  sort(all(students), cmp);
  for (auto it : students)
  {
    cout << it.second << ' ' << it.first[4] << ' ' << ' ' << it.first[0] << ' '
         << it.first[1] << ' ' << it.first[2] << ' '
         << it.first[3] << ' ' << endl;
  }
}
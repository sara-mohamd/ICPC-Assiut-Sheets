#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

  vector<pair<int, int>> row1;
  vector<pair<int, int>> row2;

  for (int i = 1; i < r1; i++)
  {
    row1.push_back({i, r1 - i});
    // cout << "[ " << row1[i - 1].first << ", " << row1[i - 1].second << " ]" << endl;
  }
  // cout << "--------------\n";
  for (int i = 1; i < r2; i++)
  {
    row2.push_back({i, r2 - i});
    // cout << "[ " << row2[i - 1].first << ", " << row2[i - 1].second << " ]" << endl;
  }

  for (int i = 0; i < r1 - 1; i++)
  {
    if (row1[i].first > 9 || row1[i].second > 9)
      continue;
    for (int j = 0; j < r2 - 1; j++)
    {
      if (row2[j].first > 9 || row2[j].second > 9)
        continue;
      if (row1[i].first == row1[i].second || row2[j].first == row2[j].second)
        continue;

      if (row1[i].first + row2[j].first == c1 && row1[i].first != row2[j].first &&
          row1[i].second + row2[j].second == c2 && row1[i].second != row2[j].second)
      {

        if (row1[i].first + row2[j].second == d1 && row1[i].first != row2[j].second &&
            row1[i].second + row2[j].first == d2 && row1[i].second != row2[j].first)
        {
          cout << row1[i].first << ' ' << row1[i].second << endl
               << row2[j].first << ' ' << row2[j].second << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1\n";
}
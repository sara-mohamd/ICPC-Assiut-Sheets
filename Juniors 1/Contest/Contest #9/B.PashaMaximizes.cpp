#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  int k;
  cin >> s >> k;

  for (int i = 0; i < s.size() && k > 0; i++)
  {
    // find max digit within next k positions
    int pos = i;
    for (int j = i + 1; j < s.size() && j - i <= k; j++)
    {
      if (s[j] > s[pos])
        pos = j;
    }
    /*
    move max digit at pos to i.
    as you are not allowed to swap between any two position
    **Only** adjacent elements to swap(i, pos) directly is
   */

    for (int j = pos; j > i; j--)
    {
      swap(s[pos], s[i]);
    }
    k -= (pos - i);
  }

  cout << s << "\n";
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxy";
  string word;
  cin >> word;
  int ans = min(word[0] - 'a', 26 - (word[0] - 'a'));
  // cout << ans << endl;
  // cout << 'z' - 'a' << endl;
  // cout << 26 - ('z' - 'a') << endl;
  for (int i = 1; i < word.size(); i++)
  {
    // e - z =
    ans += min(abs(word[i] - word[i - 1]), abs(26 - (word[i] - word[i - 1])));
  }
  cout << ans << endl;
}

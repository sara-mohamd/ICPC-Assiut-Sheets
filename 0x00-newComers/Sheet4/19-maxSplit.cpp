#include <iostream>
#include <vector>
using namespace std;
int main()
{
  string s;
  cin >> s;
  string ans;
  string result[500];
  int idx = 0;
  int l = 0, r = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'L')
    {
      l++;
      ans += 'L';
    }
    else
    {
      r++;
      ans += 'R';
    }
    if (l == r)
    {
      result[idx++] = ans;
      l = r = 0;
      ans = "";
    }
  }
  cout << idx << endl;
  for (int i = 0; i < idx; i++)
    cout << result[i] << endl;
  return 0;
}
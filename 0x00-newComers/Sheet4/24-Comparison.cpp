#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string solve(string s1, string s2)
{
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  // cout << s1 << " " << s2;
  return s1 + s2;
}
int main()
{
  string s, org, txt;
  cin >> s;
  org = s;
  txt = org;
  if (s.length() == 1)
  {
    cout << s;
    return 0;
  }
  for (int i = 0; i < s.length() - 1; i++)
  {
    s = solve(org.substr(0, i + 1), org.substr(i + 1, org.length() - i - 1));
    txt = min(txt, s);
    // cout << " = " << s << "\t=> " << txt << endl;
  }

  cout << txt;
  return 0;
}
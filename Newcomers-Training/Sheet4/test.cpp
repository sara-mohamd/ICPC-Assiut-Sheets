#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string solve(string s1, string s2)
{
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  return s1 + s2;
}
int main()
{
  string s = "acmicpc";
  // s = solve(s.substr(1 + i, i), s.substr(s[i + 1], s.length() - i + 1));
  for (int i = 0; i < s.length(); i++)
    if (i + 1 < s.length())
      cout << s.substr(0, i + 1) << "\t" << s.substr(i + 1, s.length() - (i + 1)) << endl;
  return 0;
}
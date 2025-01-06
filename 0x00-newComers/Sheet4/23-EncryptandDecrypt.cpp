#include <iostream>
#include <string>

using namespace std;
int indexOf(string str, char ch)
{
  for (int i = 0; i < 62; i++)
  {
    if (str[i] == ch)
      return i;
  }
  return 1;
}
int main()
{
  string s;
  int x;
  cin >> x;
  cin >> s;
  string k, o;
  k = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  for (int i = 0; i < s.length(); i++)
  {
    if (x == 1)
      cout << k[indexOf(o, s[i])];
    else
      cout << o[indexOf(k, s[i])];
  }
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string url;
  cin >> url;
  int idx = 0;
  for (int i = 0; i < url.length(); i++)
  {
    if (url[i] == '?')
    {
      idx = i + 1;
      break;
    }
  }
  string ans;
  for (int i = idx; i < url.length(); i++)
  {
    if (url[i] == '=')
      ans += ": ";
    else if (url[i] == '&')
    {
      cout << ans << endl;
      ans = "";
    }
    else if (i + 1 == url.length())
    {
      ans += url[i];
      cout << ans << endl;
    }
    else
      ans += url[i];
  }
  return 0;
}
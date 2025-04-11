#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;

  string flag = "EGYPT";
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'E')
    {
      if (s.substr(i, 5) == flag)
      {
        cout << " ";
        i += 4;
      }
      else
        cout << s[i];
    }
    else
      cout << s[i];
  }
  return 0;
}
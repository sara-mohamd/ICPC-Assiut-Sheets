#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ',')
      cout << " ";
    else if (s[i] >= 'a' && s[i] <= 'z')
    {
      s[i] -= 32;
      cout << s[i];
    }
    else
    {
      s[i] += 32;
      cout << s[i];
    }
  }
  return 0;
}
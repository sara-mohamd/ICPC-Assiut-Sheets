#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  if (s2.length() >= s1.length())
  {
    for (int i = 0; i < s1.length(); i++)
    {
      if (s1[i] > s2[i])
      {
        cout << s2;
        return 0;
      }
      else if (s1[i] == s2[i])
        continue;
      else
      {
        cout << s1;
        return 0;
      }
    }
    cout << s1;
  }
  // else refer to s1.length() >= s2.length()
  else
  {
    for (int i = 0; i < s2.length(); i++)
    {
      if (s1[i] > s2[i])
      {
        cout << s2;
        return 0;
      }
      else if (s1[i] == s2[i])
        continue;
      else
      {
        cout << s1;
        return 0;
      }
    }
    cout << s2;
  }

  return 0;
}
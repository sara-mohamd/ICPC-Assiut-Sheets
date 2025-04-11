#include <iostream>
#include <string>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;
  while (testCases--)
  {
    string s;
    bool flag = 0;
    cin >> s;
    if (s.length() < 3)
    {
      cout << "Bad" << endl;
      continue;
    }
    for (int i = 0; i * i < s.length(); i++)
    {
      if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' ||
          s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
      {
        flag = 1;
        break;
      }
    }
    if (flag)
      cout << "Good" << endl;
    else
      cout << "Bad" << endl;
  }
  return 0;
}
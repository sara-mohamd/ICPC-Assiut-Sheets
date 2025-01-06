#include <iostream>
#include <string>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;
  while (testCases--)
  {
    string s, t;
    cin >> s >> t;
    int size = 0;
    (s.length() > t.length()) ? size = s.length() : size = t.length();
    // minSize = min(s.length(), t.length());
    for (int i = 0; i < size; i++)
    {
      if (i < s.length())
        cout << s[i];
      if (i < t.length())
        cout << t[i];
    }

    cout << endl;
  }
}
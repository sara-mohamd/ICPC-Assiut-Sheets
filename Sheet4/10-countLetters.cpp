#include <iostream>
#include <string>
using namespace std;

int main()
{
  int count[26] = {0};
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); i++)
    count[char(s[i] - 49) - '0']++;

  for (int i = 0; i < 26; i++)
  {
    if (count[i] != 0)
      cout << char(i + 97) << " : " << count[i] << endl;
  }
}
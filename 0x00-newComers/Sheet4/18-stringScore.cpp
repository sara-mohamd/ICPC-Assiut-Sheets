#include <iostream>
#include <string>
using namespace std;

int main()
{
  int size;
  cin >> size;
  string s;
  cin >> s;
  long long int score = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'V')
      score += 5;
    else if (s[i] == 'W')
      score += 2;
    else if (s[i] == 'X')
      i++;
    else if (s[i] == 'Z' && i + 1 < s.size())
    {
      if (s[i + 1] == 'V')
      {
        score /= 5;
        i++;
      }
      else if (s[i + 1] == 'W')
      {
        score /= 2;
        i++;
      }
      else
        continue;
    }
    else if (s[i] == 'Y' && i + 1 < s.length())
    {
      // s = resize(s, i + 1);
    }
  }
  cout << score;
  return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
  string s;
  getline(cin, s);

  vector<int> ptr;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == ' ')
      ptr.push_back(i);
  }
  ptr.push_back(s.length());

  int t1 = 0;
  for (int i = 0; i < ptr.size(); i++)
  {
    int ctr = 0;
    for (int j = t1; j < ptr[i]; j++)
      cout << s[ptr[i] - ctr++ - 1];
    t1 = ptr[i] + 1;
    if (ptr[i] != s.length())
      cout << ' ';
  }
}

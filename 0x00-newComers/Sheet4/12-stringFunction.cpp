
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int len, testCases;
  cin >> len >> testCases;
  int start, end;
  string s;
  cin >> s;
  if (s.length() != len)
  {
    cout << "String size must equal " << len;
    return 0;
  }
  while (testCases--)
  {
    string ops;
    cin >> ops;

    if (ops == "pop_back")
      s.pop_back();
    else if (ops == "front")
      cout << s.front() << endl;
    else if (ops == "back")
      cout << s.back() << endl;
    else if (ops == "print")
    {
      int index;
      cin >> index;
      cout << s[index - 1] << endl;
    }
    if (ops == "sort")
    {
      cin >> start >> end;
      if (start > end)
        swap(start, end);
      sort(s.begin() + start - 1, s.begin() + end);
    }
    if (ops == "reverse")
    {
      cin >> start >> end;
      if (start > end)
        swap(start, end);
      reverse(s.begin() + start - 1, s.begin() + end);
    }

    if (ops == "substr")
    {
      cin >> start >> end;
      if (start > end)
        swap(start, end);
      cout << s.substr(start - 1, end - start + 1) << endl;
    }

    if (ops == "push_back")
    {
      char c;
      cin >> c;
      s.push_back(c);
    }
  }
  return 0;
}
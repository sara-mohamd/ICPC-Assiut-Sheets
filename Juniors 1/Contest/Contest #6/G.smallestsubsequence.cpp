#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false), cin.tie(NULL);

  string s; cin >> s;
  vector<int> freq(26);

  // save last occurance of character
  for (int i = 0; i < s.size(); i++)
  {
    char c = s[i];
    freq[c - 'a'] = i;
  }

  stack<char> _stack;
  set<char> visited;
  for (int i = 0; i < s.size(); i++)
  {
    char c = s[i];
    if (visited.find(c) != visited.end())
      continue;

    while (!_stack.empty() && c < _stack.top() && freq[_stack.top() - 'a'] > i)
      visited.erase(_stack.top()), _stack.pop();
    if (visited.find(c) == visited.end())
      _stack.push(c), visited.insert(c);
  }

  string result;
  while (!_stack.empty())
  {
    result += _stack.top();
    _stack.pop();
  }
  reverse(result.begin(), result.end());
  cout << result << '\n';

  return 0;
}
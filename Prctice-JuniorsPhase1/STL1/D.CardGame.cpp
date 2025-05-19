#include <bits/stdc++.h>
using namespace std;
bool turnM = 1, turnA = 0, turnR = 0;
void Solution(queue<char> &qu)
{
  if (qu.front() == 'm')
    turnM = 1, turnA = 0, turnR = 0;
  else if (qu.front() == 'a')
    turnM = 0, turnA = 1, turnR = 0;
  else if (qu.front() == 'r')
    turnM = 0, turnA = 0, turnR = 1;
  qu.pop();
}

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  queue<char> m, a, r;
  string stmt;

  cin >> stmt;
  for (auto c : stmt)
    m.push(c);
  cin >> stmt;
  for (auto c : stmt)
    a.push(c);

  cin >> stmt;
  for (auto c : stmt)
    r.push(c);

  while (true)
  {
    if (turnM)
    {
      if (m.empty())
      {
        cout << "M\n";
        break;
      }
      Solution(m);
    }
    else if (turnA)
    {
      if (a.empty())
      {
        cout << "A\n";
        break;
      }
      Solution(a);
    }
    else if (turnR)
    {
      if (r.empty())
      {
        cout << "R\n";
        break;
      }
      Solution(r);
    }
  }
}
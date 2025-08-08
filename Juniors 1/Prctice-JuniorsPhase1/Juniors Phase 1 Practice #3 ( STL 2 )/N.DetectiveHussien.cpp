#include <bits/stdc++.h>
using namespace std;

void speed() { ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); }

int main()
{
  speed();
  int n, m, idx = 1;
  cin >> n;

  string s, var;
  vector<string> code1(n);

  for (int i = 0; i < n; i++)
  {
    cin >> s;
    int size = s.length();
    if ((size == 6 || size == 5 || size == 4) && s.find('+') == string::npos)
    {
      cin >> var;
      code1[i] = to_string(size) + var;
    }
    else
      code1[i] = "1" + s;
  }

  cin >> m;
  vector<string> code2(m);

  for (int i = 0; i < m; i++)
  {
    cin >> s;
    int size = s.length();
    if ((size == 6 || size == 5 || size == 4) && s.find('+') == string::npos)
    {
      cin >> var;
      code2[i] = to_string(size) + var;
    }
    else
      code2[i] = "1" + s;
  }

  if (n != m)
  {
    cout << "NO\n";
    return 0;
  }
  map<string, string> mp;

  for (int i = 0; i < n; i++)
  {
    if (code1[i][0] != code2[i][0])
    {
      idx = 0;
      break;
    }

    if (code1[i][0] == '6') // define
    {
      mp[code2[i].substr(1)] = code1[i].substr(1);
    }
    else if (code1[i][0] == '4' || code1[i][0] == '5') // variable usage
    {
      string key = code2[i].substr(1);
      if (!mp.count(key) || code1[i].substr(1) != mp[key])
      {
        idx = 0;
        break;
      }
    }
    else if (code1[i][0] == '1') // expression
    {
      string op = "", str = "";

      for (int j = 1; j < code2[i].size(); j++)
      {
        if (code2[i][j] == '=' || code2[i][j] == '+')
        {
          if (!mp.count(str))
          {
            idx = 0;
            break;
          }
          op += mp[str] + code2[i][j];
          str = "";
        }
        else
        {
          str += code2[i][j];
        }
      }

      if (!mp.count(str))
      {
        idx = 0;
        break;
      }

      op += mp[str];

      if (op != code1[i].substr(1))
      {
        idx = 0;
        break;
      }
    }
  }

  cout << (idx ? "YES\n" : "NO\n");

  return 0;
}

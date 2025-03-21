#include <bits/stdc++.h>
using namespace std;

struct emp
{
  string name;
  long long salary;
};

int main()
{
  int n;
  cin >> n;
  vector<emp> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].name >> v[i].salary;

  sort(v.begin(), v.end(), [](const emp &a, const emp &b)
       {
    if (a.salary == b.salary) return a.name < b.name;
    return a.salary > b.salary; });

  for (int i = 0; i < n; i++)
    cout << v[i].name << " " << v[i].salary << endl;
}
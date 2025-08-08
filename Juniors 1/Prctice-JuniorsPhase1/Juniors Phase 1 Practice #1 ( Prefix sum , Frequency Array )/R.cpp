#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long sum = 0, Oddsum = 0, Evensum = 0, ctr = 0;
  vector<int> a(n + 1, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  int i = 0;
  while (i < n)
  {
    vector<int> b = a;
    b.erase(b.begin() + i);
    for (int j = 0; j < n - 1; j++)
    {
      if (j % 2 == 0)
        Evensum += b[j];
      else
        Oddsum += b[j];
    }
    if (Oddsum == Evensum)
      ctr++;
    Oddsum = Evensum = 0;
    i++;
  }
  cout << ctr << endl;
}
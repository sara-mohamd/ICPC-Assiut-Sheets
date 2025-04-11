#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, x;
  cin >> a >> b;
  long long sumA = 0, sumB = 0;
  for (int i = 0; i < a; i++)
  {
    cin >> x;
    sumA += x;
  }

  for (int i = 0; i < b; i++)
  {
    cin >> x;
    sumB += x;
  }

  if (sumA == sumB)
    cout << "Yes\n";
  else
    cout << "No\n";
}
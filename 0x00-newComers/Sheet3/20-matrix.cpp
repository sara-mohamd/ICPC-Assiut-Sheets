#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  int mainD = 0, secD = 0;

  for (int i = 0; i < n; i++)
  {
    mainD += arr[i][i];
    secD += arr[i][n - i - 1];
  }

  //   cout << mainD << " " << secD;

  cout << abs(mainD - secD);
  return 0;
}

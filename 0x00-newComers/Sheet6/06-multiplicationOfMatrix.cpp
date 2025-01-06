#include <iostream>
using namespace std;

int main()
{
  int ra, ca, rb, cb;
  cin >> ra >> ca;
  int a[ra][ca];

  for (int r = 0; r < ra; r++)
  {
    for (int c = 0; c < ca; c++)
      cin >> a[r][c];
  }

  cin >> rb >> cb;
  int b[rb][cb];
  for (int r = 0; r < rb; r++)
  {
    for (int c = 0; c < cb; c++)
      cin >> b[r][c];
  }
  int arr[ra][cb];
  long int sum;
  for (int i = 0; i < ra; i++)
  {
    sum = 0;
    for (int j = 0; j < cb; j++)
    {
      sum += a[i][j] * b[j][i];
    }
    cout << sum << " ";
  }
}
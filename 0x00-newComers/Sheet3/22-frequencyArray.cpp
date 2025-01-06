#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int arr[m] = {0};
  int items[n];
  for (int i = 0; i < n; i++)
  {
    cin >> items[i];
    arr[items[i] - 1]++;
  }

  for (int i = 0; i < m; i++)
    cout << arr[i] << endl;
  return 0;
}
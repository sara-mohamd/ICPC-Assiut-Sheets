#include <iostream>
using namespace std;

int main()
{
  int testCases, size;
  cin >> testCases;
  while (testCases--)
  {
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
      cin >> arr[i];

    for (int i = 0; i < size; i++)
    {
      int mx = -1e9;
      for (int j = i; j < size; j++)
      {
        mx = max(mx, arr[j]);
        cout << mx << " ";
      }
    }
    cout << endl;
  }
}
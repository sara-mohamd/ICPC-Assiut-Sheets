#include <iostream>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int size;
    cin >> size;
    int arr[size], counter = size;
    for (int i = 0; i < size; i++)
      cin >> arr[i];
    // 1 4 2 3 5
    // counter = 5
    for (int i = 0; i < size; i++)
    {
      for (int j = i + 1; j < size; j++)
      {
        if (arr[j - 1] <= arr[j])
          // 1 < 4
          counter++;
        //
        else
          break;
      }
    }
    cout << counter << endl;
  }
}
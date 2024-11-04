#include <iostream>
using namespace std;

int main()
{
  int size;
  int OpsCounter = 0;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
    if (arr[i] % 2 != 0)
      return 0;
  }

  while (true)
  {
    for (int i = 0; i < size; i++)
    {
      if (arr[i] % 2 != 0)
        return 0;
      arr[i] /= 2;
    }
    OpsCounter++;
  }
  cout << OpsCounter;
}
#include <iostream>
using namespace std;

int main()
{
  long long arr[50] = {0};
  arr[1] = 1;
  for (int i = 2; i < 50; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  long long num;
  cin >> num;

  cout << arr[num - 1];
}

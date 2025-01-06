#include <iostream>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

int main()
{
  int size;
  cin >> size;
  long long num, sum = 0;
  for (int i = 0; i < size; i++)
  {
    cin >> num;
    sum += num;
  }
  if (sum < 0)
    sum *= -1;
  cout << sum;
  return 0;
}

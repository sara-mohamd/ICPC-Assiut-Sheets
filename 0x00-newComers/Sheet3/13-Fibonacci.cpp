#include <iostream>
using namespace std;

int seq(int);
int main()
{
  int num;
  cin >> num;

  cout << seq(num);
}

int seq(int n)
{
  if (n == 1 || n == 2)
    return 1;
  else
    return seq(n - 1) + seq(n - 2);
}
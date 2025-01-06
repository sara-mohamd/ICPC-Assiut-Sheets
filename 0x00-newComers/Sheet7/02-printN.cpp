#include <iostream>
using namespace std;
int i = 0;
void print(int n)
{
  if (n < i)
    return;
  cout << i << endl;
  i++;
  print(n - 1);
}
int main()
{

  int n;
  cin >> n;
  print(n);
  return 0;
}
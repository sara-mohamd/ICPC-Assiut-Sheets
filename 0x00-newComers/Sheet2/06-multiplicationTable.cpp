#include <iostream>
using namespace std;
int main()
{
  int num;
  cin >> num;
  for (int i = 1; i < 13; i++)
    cout << num << " * " << i << " = " << num * i << endl;
  return 0;
}

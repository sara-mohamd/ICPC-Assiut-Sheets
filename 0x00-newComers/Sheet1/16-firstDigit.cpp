#include <iostream>
using namespace std;
void Checker(int);
int main()
{
  int n;
  cin >> n;
  if (n >= 1000)
    Checker(n / 1000);
  else
    Checker(n / 100);
  return 0;
}
void Checker(int num)
{
  if (num != 0)
  {
    if (num % 2 == 0)
    {
      cout << "EVEN" << endl;
      return;
    }
    cout << "ODD" << endl;
    return;
  }
  cout << "Invalid number" << endl;
}
#include <iostream>
using namespace std;

int main()
{
  long long num;
  cin >> num;
  if ((num != 1) && (num & (num - 1)))
    cout << "NO";
  else
    cout << "YES";
}
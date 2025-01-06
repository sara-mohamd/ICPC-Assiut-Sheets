#include <iostream>
using namespace std;

int main()
{

  int digitNumber;
  cin >> digitNumber;
  long long sum = 0;
  char s;
  for (int i = 0; i < digitNumber; i++)
  {
    cin >> s;
    sum += (s - '0');
  }
  cout << sum << endl;
  return 0;
}

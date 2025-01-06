#include <iostream>
using namespace std;
int main()
{
  int password;
  while (1)
  {
    cin >> password;
    if (password == 1999)
    {
      cout << "Correct";
      return 0;
    }
    cout << "Wrong" << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;
int main()
{
  char c;
  cin >> c;

  if (c >= 97 and c <= 122)
  {
    cout << "ALPHA\nIS SMALL" << endl;
  }
  else if (c >= 65 and c <= 90)
    cout << "ALPHA\nIS CAPITAL" << endl;
  else
    cout
        << "IS DIGIT" << endl;
  return 0;
}

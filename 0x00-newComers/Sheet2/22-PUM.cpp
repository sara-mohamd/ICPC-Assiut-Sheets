#include <iostream>
using namespace std;

int main()
{
  int pumsLines;
  cin >> pumsLines;

  int i = 1;
  while (pumsLines)
  {
    int check = 4;
    while (check)
    {
      i % 4 == 0 ? cout << "PUM" : cout << i << " ";
      i++;
      check--;
    }
    cout << endl;
    pumsLines--;
  }
  return 0;
}

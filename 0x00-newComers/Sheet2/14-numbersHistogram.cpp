#include <iostream>
using namespace std;

int main()
{
  char symbol;
  int num;
  cin >> symbol;
  cin >> num;

  // allocate an array of ints
  int *ptr = new int(num);
  for (int i = 0; i < num; i++)
    cin >> *(ptr + i);

  for (int i = 0; i < num; i++)
  {
    int x = *(ptr + i);
    while (x)
    {
      x--;
      cout << symbol;
    }
    cout << endl;
  }
}
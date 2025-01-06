#include <iostream>
#include <string>
using namespace std;

int main()
{
  int size, index = 0;
  cin >> size;
  string txt;
  cin >> txt;
  for (int i = 0; i < size and index < size; i++)
  {
    if (txt[i] != txt[i + 1])
      index++;
  }
  cout << index;
  return 0;
}
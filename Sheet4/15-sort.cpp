#include <iostream>
using namespace std;

int main()
{
  int size;
  int arr[26] = {0};
  char c;
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    cin >> c;
    arr[c - 'a']++;
  }

  for (int i = 0; i < 26; i++)
  {
    if (arr[i] != 0)
    {
      for (int j = 0; j < arr[i]; j++)
        cout << char(i + 'a');
    }
  }
  return 0;
}

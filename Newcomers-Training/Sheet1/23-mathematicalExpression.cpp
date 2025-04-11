#include <iostream>
using namespace std;
int main()
{
  int numOne, numTwo, result;
  char opperation, equal;

  cin >> numOne;
  cin >> opperation;
  cin >> numTwo;
  cin >> equal;
  cin >> result;

  switch (opperation)
  {
  case '+':
    if ((numOne + numTwo) == result)
      cout << "Yes";
    else
      cout << (numOne + numTwo);
    break;
  case '-':
    if ((numOne - numTwo) == result)
      cout << "Yes";
    else
      cout << (numOne - numTwo);
    break;
  case '*':
    if ((numOne * numTwo) == result)
      cout << "Yes";
    else
      cout << (numOne * numTwo);
    break;
  default:
    cout << "Invalid Operation";
    break;
  }
  return 0;
}
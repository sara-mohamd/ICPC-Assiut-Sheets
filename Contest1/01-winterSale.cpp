#include <iostream>
using namespace std;
int main()
{
  int priceDiscounted;
  double discountRate, price;

  cin >> discountRate;
  cin >> priceDiscounted;

  price = priceDiscounted / (1 - (discountRate / 100));
  cout << price;
  return 0;
}
#include <iostream>
using namespace std;
void solve(int s)
{
  int a[s], b[s], c[s + s];
  for (int i = 0; i < s; i++)
    cin >> a[i];
  for (int i = 0; i < s; i++)
    cin >> b[i];
  for (int i = 0; i < s; i++)
    c[i] = b[i];
  for (int i = 0; i < s; i++)
    c[i + s] = a[i];
  for (int i = 0; i < s * 2; i++)
    cout << c[i] << " ";
}
int main()
{
  int size;
  cin >> size;
  solve(size);
}
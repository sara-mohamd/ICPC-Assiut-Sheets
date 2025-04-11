#include <iostream>
#include <string>
using namespace std;
void swap(char *, char *);
int len(string);
int main()
{
  string a, b;
  cin >> a >> b;
  cout << len(a) << " " << len(b) << endl
       << a + b << endl;
  swap(a[0], b[0]);
  cout << a << " " << b;
}

void swap(char *a, char *b)
{
  char t = *b;
  *b = *a;
  *a = t;
}
int len(string s) { return s.length(); }
#include <bits/stdc++.h>
using namespace std;
struct student
{
  string name;
  int ar,
      mth,
      sc,
      en;
  long long total;
  student() : ar(0), mth(0), sc(0), en(0), total(0) {}
  void getTotal()
  {
    this->total = this->ar + this->en + this->mth + this->sc;
  }
};

int main()
{
  int n;
  cin >> n;
  vector<student> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i].name >> vec[i].ar >> vec[i].mth >> vec[i].sc >> vec[i].en;
    vec[i].getTotal();
  }

  sort(vec.begin(), vec.end(), [](const student &a, const student &b)
       {
    if (a.total == b.total)
      return a.name < b.name;
    return a.total > b.total; });

  for (int i = 0; i < n; i++)
    cout << vec[i].name << "  " << vec[i].total << " "
         << vec[i].ar << " " << vec[i].mth << " "
         << vec[i].sc << " " << vec[i].en << endl;
}
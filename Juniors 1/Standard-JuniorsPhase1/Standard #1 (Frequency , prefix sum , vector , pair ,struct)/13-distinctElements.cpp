#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q, x;
  cin >> n >> q;
  int arr[n];
  set<int> st;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    st.insert(x);
  }
  while (q--)
  {
    cin >> x;
    // auto it
    cout << distance(st.begin(), st.lower_bound(x)) << ' ' << st.size() - (distance(st.begin(), st.lower_bound(x)) + 1) << endl;
  }
}
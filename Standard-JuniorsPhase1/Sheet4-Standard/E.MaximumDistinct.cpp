#include <bits/stdc++.h>
#define int long long
using namespace std;

void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }
signed main()
{
  int n, k, l = 0, r = 0, ans = 0;
  string s;
  set<char> st;
  int freq[26] = {0};
  cin >> n >> k >> s;

  while (r < k)
  {
    freq[s[r] - 'a']++;
    st.insert(s[r++]);
  }

  ans = st.size();
  while (r < n)
  {
    freq[s[l] - 'a']--;
    if (!freq[s[l] - 'a'])
      st.erase(s[l]);
    st.insert(s[r]), freq[s[r++] - 'a']++;
    ans = max(ans, (int)st.size());
    l++;
  }
  cout << ans << '\n';
}

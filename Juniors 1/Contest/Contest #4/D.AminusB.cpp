#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s = to_string(a - b);
    if(s[s.size() - 1] - '0' > 2 || s[s.size() - 1] - '0' < 2)
        s[s.size() - 1] = '2';
    else if (s[s.size() - 1] - '0' == 2)
        s[s.size() - 1] = '1';
    cout << s << '\n';
    return 0;
}

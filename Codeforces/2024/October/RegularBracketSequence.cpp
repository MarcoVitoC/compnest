#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    int ans = 0;
    stack<char> st;
    for (char c: s) {
        if (c == '(') st.push(c);
        if (!st.empty() && c == ')') {
            st.pop();
            ans++;
        }
    }
    cout << ans * 2 << endl;

    return 0;
}
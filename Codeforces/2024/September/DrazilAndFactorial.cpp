#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    string s, ans = "";
    cin >> s;

    vector<string> str = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
    for (char c: s) {
        ans += str[c - '0'];
    }
    sort(all(ans), greater<int>());
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s, t;
    cin >> s >> t;

    sort(all(s));
    sort(all(t), greater<int>());
    cout << ((s < t) ? "Yes" : "No") << endl;

    return 0;
}
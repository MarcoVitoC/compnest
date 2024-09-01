#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i=0; i<n; i++) {
        if (a[i] == b[i]) continue;
        if (a[i] != a[i + 1] && a[i + 1] != b[i + 1]) i++;
        ans++;
    }
    cout << ans << endl;

    return 0;
}
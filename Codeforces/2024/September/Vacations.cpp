#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int ans = 0;
    for (int i=0; i<n; i++) {
        if (a[i] == 0) {
            ans++;
        } else if (i > 0 && a[i] == a[i - 1] && a[i] != 3) {
            a[i] = 0;
            ans++;
        } else if (a[i] == 3) {
            if (a[i - 1] == 1) a[i] = 2;
            if (a[i - 1] == 2) a[i] = 1;
        }
    }
    cout << ans << endl;

    return 0;
}
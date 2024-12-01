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
    for (auto &ai: a) cin >> ai;
    sort(all(a));

    int ans = 1, l = 0;
    for (int r=0; r<n; r++) {
        while (a[r] - a[l] > 5) l++;
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;

    return 0;
}
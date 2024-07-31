#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int bs(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] <= x) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return ans + 1; // +1 because it's a zero-based index
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, b;
    cin >> n >> m;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    sort(all(a));

    for (int i=0; i<m; i++) {
        cin >> b;

        cout << bs(a, b) << " ";
    }
    cout << endl;

    return 0;
}
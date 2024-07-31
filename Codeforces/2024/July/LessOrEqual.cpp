#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

// approach 1: O(n log m)
int bsta(vector<int>& a, int k) {
    int l = 1, r = 1e9;
    while (l <= r) {
        int x = l + (r - l) / 2, cnt = 0;
        for (int num: a) {
            if (num <= x) cnt++;
        }

        if (cnt == k) {
            return x;
        } else if (cnt < k) {
            l = x + 1;
        } else {
            r = x - 1;
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &ai: a) {
        cin >> ai;
    }
    sort(all(a));

    // approach 2: O(n)
    int ans = (k == 0) ? a[0] - 1 : a[k - 1], cnt = 0;
    for (int num: a) {
        if (num <= ans) cnt++;
    }
    cout << ((cnt != k || !(ans >= 1 && ans <= 1e9)) ? -1 : ans) << endl;

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n), b(n), posA(n + 1), posB(n + 1);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        posA[a[i]] = i;
    }
    for (int i=0; i<n; i++) {
        cin >> b[i];
        posB[b[i]] = i;
    }

    vector<int> cnt(n);
    for (int i=1; i<=n; i++) {
        int shift = (posB[i] - posA[i] + n) % n;
        cnt[shift]++;
    }
    cout << *max_element(all(cnt)) << endl;

    return 0;
}
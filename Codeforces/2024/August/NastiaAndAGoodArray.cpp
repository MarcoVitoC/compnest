#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 5);
    int mnIndex = 1;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        if (a[i] < a[mnIndex]) mnIndex = i;
    }
    
    int mn = a[mnIndex];
    cout << n - 1 << endl;
    for (int i=mnIndex-1; i>0; i--) {
        a[i] = (a[i + 1] == mn) ? mn + 1 : mn;
        cout << i << " " << mnIndex << " " << a[i] << " " << mn << endl; 
    }
    for (int i=mnIndex+1; i<=n; i++) {
        a[i] = (a[i - 1] == mn) ? mn + 1 : mn;
        cout << mnIndex << " " << i << " " << mn << " " << a[i] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
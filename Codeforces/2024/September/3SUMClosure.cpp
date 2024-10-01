#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, a;
    cin >> n;

    vector<int> v;
    int pos = 0, neg = 0, zero = 0;
    for (int i=0; i<n; i++) {
        cin >> a;

        if (a != 0 || zero == 0) v.push_back(a);
        if (a == 0) zero++;
        else if (a > 0) pos++;
        else neg++;
    }

    if (pos > 2 || neg > 2) {
        cout << "NO" << endl;
        return;
    }

    for (int i=0; i<v.size(); i++) {
        for (int j=i+1; j<v.size(); j++) {
            for (int k=j+1; k<v.size(); k++) {
                bool isFound = false;
                for (int l=0; l<v.size(); l++) {
                    if (v[l] == v[i] + v[j] + v[k]) {
                        isFound = true;
                        break;
                    }
                }
                
                if (!isFound) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
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
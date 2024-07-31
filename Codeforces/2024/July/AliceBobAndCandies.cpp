#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, ai;
    cin >> n;

    deque<int> d;
    for (int i=0; i<n; i++) {
        cin >> ai;
        d.push_back(ai);
    }

    int moves = 1, a = d.front(), prevA = d.front(), b = 0, prevB = 0;
    d.pop_front();
    while (!d.empty()) {
        int c = 0;
        ++moves;
        
        if (moves % 2 == 0) {
            while (!d.empty() && c <= prevA) {
                c += d.back();
                d.pop_back();
            }
            b += c;
            prevB = c;
        } else {
            while (!d.empty() && c <= prevB) {
                c += d.front();
                d.pop_front();
            }
            a += c;
            prevA = c;
        }
    }

    cout << moves << " " << a << " " << b << endl;
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
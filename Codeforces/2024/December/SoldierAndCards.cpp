#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int k1, k1i;
    cin >> k1;

    queue<int> q1;
    for (int i=0; i<k1; i++) {
        cin >> k1i;
        q1.push(k1i);
    }

    int k2, k2i;
    cin >> k2;

    queue<int> q2;
    for (int i=0; i<k2; i++) {
        cin >> k2i;
        q2.push(k2i);
    }

    int cnt = 0;
    while (!q1.empty() && !q2.empty()) {
        if (cnt > 10000) {
            cout << -1 << endl;
            return 0;
        }

        int f1 = q1.front(); q1.pop();
        int f2 = q2.front(); q2.pop();
        if (max(f1, f2) == f1) {
            q1.push(f2);
            q1.push(f1);
        } else {
            q2.push(f1);
            q2.push(f2);
        }

        cnt++;
    }

    cout << cnt << " ";
    cout << ((q1.empty()) ? 2 : 1) << endl;

    return 0;
}
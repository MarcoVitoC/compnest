#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    priority_queue<ll> pq;
    for (int i=0; i<N; i++) {
        int A;
        cin >> A;
        pq.push(A);
    }

    for (int i=0; i<M; i++) {
        ll mx = pq.top(); pq.pop();
        pq.push(mx / 2);
    }

    ll ans = 0;
    while (!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;

    return 0;
}
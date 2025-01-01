#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> X(M);
    for (auto &Xi: X) cin >> Xi;
    sort(all(X));

    if (N >= M) {
        cout << 0 << endl;
        return 0;
    }

    priority_queue<int> pq;
    for (int i=0; i<M-1; i++) {
        int diff = abs(X[i] - X[i + 1]);
        pq.push(diff);
    }

    int total = abs(X[M - 1] - X[0]), sum = 0;
    for (int i=0; i<N-1; i++) {
        if (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
    }
    cout << total - sum << endl;

    return 0;
}
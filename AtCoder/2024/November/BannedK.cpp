#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    vector<ll> A(N), cnt(N + 1);
    for (auto &Ai: A) {
        cin >> Ai;
        cnt[Ai]++;
    }

    ll total = 0;
    for (auto x: cnt) {
        total += (x * (x - 1)) / 2;
    }

    for (int i=0; i<N; i++) {
        cout << total - cnt[A[i]] + 1 << endl;
    }

    return 0;
}
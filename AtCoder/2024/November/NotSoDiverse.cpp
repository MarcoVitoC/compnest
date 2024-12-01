#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K, A;
    cin >> N >> K;

    vector<int> cnt(N + 1);
    for (int i=0; i<N; i++) {
        cin >> A;
        cnt[A]++;
    }
    sort(all(cnt));

    int sumK = 0;
    for (int i=N; i>=1; i--) {
        if (K == 0) break;
        if (cnt[i] != 0) {
            sumK += cnt[i];
            K--;
        }
    }
    cout << N - sumK << endl;

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    map<int, int> cnt;
    for (int i=0; i<N; i++) {
        int D;
        cin >> D;

        cnt[D]++;
    }

    int M;
    cin >> M;

    for (int i=0; i<M; i++) {
        int T;
        cin >> T;

        if (!cnt[T]) {
            cout << "NO" << endl;
            return 0;
        }
        cnt[T]--;
    }
    cout << "YES" << endl;

    return 0;
}
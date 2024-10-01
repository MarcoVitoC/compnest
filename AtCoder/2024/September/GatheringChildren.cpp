#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S;
    cin >> S;

    int N = S.length();
    vector<int> ans(N);
    int even = 0, odd = 0, x = -1, y = -1;
    for (int i=0; i<N; i++) {
        if (S[i] == 'R' && S[i + 1] == 'L') {
            x = i;
            y = i + 1;
            continue;
        }

        // group each sequence of R..RL..L, then add even and odd index counts to RL's positions
        if (i % 2 == 0 && i != x && i != y) even++;
        if (i % 2 != 0 && i != x && i != y) odd++;
        if (i == N - 1 || (S[i] == 'L' && S[i + 1] == 'R')) {
            ans[x] = (x % 2 == 0) ? even + 1 : odd + 1;
            ans[y] = (y % 2 == 0) ? even + 1 : odd + 1;
            even = odd = 0;
        }
    }

    for (int x: ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
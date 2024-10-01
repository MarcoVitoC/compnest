#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    string S;
    cin >> S;

    int ans = 0;
    for (int i=0; i<N; i++) {
        vector<int> X(26), Y(26);
        for (int j=0; j<=i; j++) {
            X[S[j] - 'a']++;
        }
        for (int j=i+1; j<N; j++) {
            Y[S[j] - 'a']++;
        }

        int cnt = 0;
        for (int i=0; i<26; i++) {
            if (X[i] != 0 && Y[i] != 0) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}
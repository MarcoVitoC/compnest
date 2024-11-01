#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int &Ai: A) cin >> Ai;

    ll invWithin = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (A[i] > A[j]) invWithin++;
        }
    }

    ll invBetween = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (A[i] > A[j]) invBetween++;
        }
    }

    ll invWithinSingleCopy = invWithin * K % MOD;
    ll invBetweenCopies = invBetween * (K * (K - 1) / 2 % MOD) % MOD;
    cout << (invWithinSingleCopy + invBetweenCopies) % MOD << endl;

    return 0;
}
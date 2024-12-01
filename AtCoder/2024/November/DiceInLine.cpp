#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> p(N);
    for (auto &pi: p) cin >> pi;

    int mxSum = 0, l = 0, r = K - 1;
    for (int i=0; i<K; i++) {
        mxSum += p[i];
    }

    int currSum = mxSum;
    for (int i=K; i<N; i++) {
        currSum = currSum - p[i - K] + p[i];
        if (currSum > mxSum) {
            mxSum = currSum;
            l = i - K + 1, r = i;
        }
    }

    double ans = 0;
    for (int i=l; i<=r; i++) {
        int sum = (p[i] * (p[i] + 1)) / 2;
        ans += (sum * 1.0 / p[i]);
    }
    printf("%.12f\n", ans);

    return 0;
}
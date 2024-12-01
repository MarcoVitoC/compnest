#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    vector<int> A(N);
    for (int &Ai: A) cin >> Ai;

    int ans = 1, isAsc = -1;
    for (int i=1; i<N; i++) {
        if (isAsc == -1 && A[i] > A[i - 1]) isAsc = 1;
        if (isAsc == -1 && A[i] < A[i - 1]) isAsc = 0;
        if ((isAsc == 1 && A[i] < A[i - 1]) || (isAsc == 0 && A[i] > A[i - 1])) {
            isAsc = -1;
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
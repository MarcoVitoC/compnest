#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int ceil(int a, int b) {
    return (a + b - 1) / b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K;
    cin >> N >> K;

    for (int i=0; i<N; i++) {
        int A;
        cin >> A;
    }
    cout << ceil(N - 1, K - 1) << endl;

    return 0;
}
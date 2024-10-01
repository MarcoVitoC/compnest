#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    double X = ceil((N * 1.0) / 1.08);
    if (floor(X * 1.08) == N) {
        cout << X << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}
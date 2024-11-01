#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    vector<int> a(N);
    for (int &ai: a) cin >> ai;
    sort(all(a), greater<int>());

    int alice = 0, bob = 0;
    for (int i=0; i<N; i++) {
        if (i % 2 == 0) alice += a[i];
        else bob += a[i];
    }
    cout << alice - bob << endl;

    return 0;
}
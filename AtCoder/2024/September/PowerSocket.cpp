#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A, B;
    cin >> A >> B;

    int ans = 0, socket = 1;
    while (socket < B) {
        socket--;
        socket += A;
        ans++;
    }
    cout << ans << endl;

    return 0;
}
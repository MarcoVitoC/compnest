#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    int sum = 0;
    vector<int> h(N);
    for (int &hi: h) {
        cin >> hi;
        sum += hi;
    }
    
    int rest = 0;
    for (int i=1; i<N; i++) {
        rest += min(h[i - 1], h[i]);
    }
    cout << sum - rest << endl;

    return 0;
}
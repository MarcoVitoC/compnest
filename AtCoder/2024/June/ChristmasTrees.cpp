#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll A, M, L, R;
   cin >> A >> M >> L >> R;

   ll l = L + ((A - L) % M + M) % M;
   ll r = R - ((R - A) % M + M) % M;
   cout << (r - l) / M + 1 << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}
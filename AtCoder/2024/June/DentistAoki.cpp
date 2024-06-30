#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N, Q, T;
   cin >> N >> Q;

   vector<int> A(N, 1);
   for (int i=0; i<Q; i++) {
      cin >> T;
      A[T - 1] ^= 1;
   }

   int ans = 0;
   for (int x: A) ans += x;
   cout << ans << endl;

   return 0;
}
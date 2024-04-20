#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getKthPosition(ll l, ll r, ll k, ll size) {
   while (l <= r) {
      ll mid = l + (r - l) / 2;

      if (k > mid) {
         l = mid + 1;
      } else if (k < mid) {
         r = mid - 1;
      } else {
         return size;
      }

      size--;
   }

   return -1;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   ll n, k;
   cin >> n >> k;

   ll seqSize = 1;
   for (int i=0; i<n-1; i++) {
      seqSize = seqSize * 2 + 1;
   }
   
   cout << getKthPosition(1, seqSize, k, n) << endl;

   return 0;
}
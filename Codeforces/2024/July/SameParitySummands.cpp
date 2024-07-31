#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   int lastOdd = n - (k - 1);
   if (lastOdd > 0 && lastOdd % 2 != 0) {
      cout << "YES" << endl;
      for (int i=0; i<k-1; i++) {
         cout << 1 << " ";
      }
      cout << lastOdd << endl;
      return;
   }

   int lastEven = n - ((k - 1) * 2);
   if (lastEven > 0 && lastEven % 2 == 0) {
      cout << "YES" << endl;
      for (int i=0; i<k-1; i++) {
         cout << 2 << " ";
      }
      cout << lastEven << endl;
      return;
   }

   cout << "NO" << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}
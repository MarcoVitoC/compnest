#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 3e3;

vector<bool> isPrime(MAXN + 5, true);

void sieve() {
   for (int i=2; i*i<=MAXN; i++) {
      if (isPrime[i]) {
         for (int j=i*i; j<=MAXN; j+=i) {
            isPrime[j] = false;
         }
      }
   }
}

bool hasTwoDistinctPrimeDivisors(int x) {
   int cnt = 0;
   for (int j=2; j<=x; j++) {
      if (x % j == 0 && isPrime[j]) {
         int k = x;
         while (k % j == 0) k /= j;

         if (k > 1) cnt++;
      }
   }

   return cnt == 2;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   sieve();
   int ans = 0;
   for (int i=4; i<=n; i++) {
      if (!isPrime[i] && hasTwoDistinctPrimeDivisors(i)) ans++;
   }
   cout << ans << endl;

   return 0;
}
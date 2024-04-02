#include <bits/stdc++.h>
using namespace std;

vector<int> binaryDecimals;

void preComputeBinaryDecimals(int n) {
   for (int i=2; i<=n; i++) {
      int num = i;
      bool isBinaryDecimal = true;

      while (num > 0) {
         if (num % 10 > 1) {
            isBinaryDecimal = false;
            break;
         }
         num /= 10;
      }

      if (isBinaryDecimal) binaryDecimals.push_back(i);
   }
}

bool isProductOfBinaryDecimals(int n) {
   if (n == 1) return true;

   bool ans = false;
   for (int binaryDecimal: binaryDecimals) {
      if (n % binaryDecimal == 0) {
         ans = isProductOfBinaryDecimals(n / binaryDecimal);
      }
   }

   return ans;
}

void solve() {
   int n;
   cin >> n;

   cout << (isProductOfBinaryDecimals(n) ? "YES" : "NO") << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   preComputeBinaryDecimals(1e5);
   while (t--) {
      solve();
   }

   return 0;
}
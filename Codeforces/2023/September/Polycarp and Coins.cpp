#include <iostream>

using namespace std;

void solve() {
   long long n;
   cin >> n;

   int c1 = n / 3, c2 = n / 3;
   if (n % 3 == 0) {
      cout << c1 << " " << c2 << endl;
   } else if (n % 3 == 1) {
      cout << c1 + 1 << " " << c2 << endl;
   } else {
      cout << c1 << " " << c2 + 1 << endl;
   }
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }
}
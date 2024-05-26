#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int A, B;
   cin >> A >> B;

   if (A == B) {
      cout << -1 << endl;
   } else if (A + B == 5) {
      cout << 1 << endl;
   } else if (A + B == 4) {
      cout << 2 << endl;
   } else if (A + B == 3) {
      cout << 3 << endl;
   }

   return 0;
}
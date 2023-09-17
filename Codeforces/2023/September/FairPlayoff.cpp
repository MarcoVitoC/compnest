#include <iostream>

using namespace std;

void solve() {
   int s1, s2, s3, s4;
   cin >> s1 >> s2 >> s3 >> s4;

   int firstWinner = max(s1, s2), firstLoser = min(s1, s2);
   int secondWinner = max(s3, s4), secondLoser = min(s3, s4);

   if (firstWinner < secondLoser || secondWinner < firstLoser) {
      cout << "No" << endl;
   } else {
      cout << "Yes" << endl;
   }
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}
#include <bits/stdc++.h>
using namespace std;

int lcs(string sq1, int lenSq1, string sq2, int lenSq2) {
   vector<vector<int>> dp(lenSq1 + 5, vector<int>(lenSq2 + 5, 0));

   for (int i=1; i<=lenSq1; i++) {
      for (int j=1; j<=lenSq2; j++) {
         // if characters are the same, diagonal + 1. Else, max value of left and top
         dp[i][j] = (sq1[i - 1] == sq2[j - 1]) ? dp[i - 1][j - 1] + 1 : max(dp[i][j - 1], dp[i - 1][j]);
      }
   }

   return dp[lenSq1][lenSq2];
}

int main() {
   string sq1, sq2;

   while (getline(cin, sq1) && sq1 != "") {
      getline(cin, sq2);

      cout << lcs(sq1, sq1.length(), sq2, sq2.length()) << endl;
   }

   return 0;
}
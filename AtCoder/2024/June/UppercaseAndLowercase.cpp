#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isUppercase(char c) {
   return c >= 'A' && c <= 'Z';
}

bool isLowercase(char c) {
   return c >= 'a' && c <= 'z';
}

void solve() {
   string S;
   cin >> S;

   int cntUppercase = 0, cntLowercase = 0;
   for (char c: S) {
      if (isUppercase(c)) cntUppercase++;
      if (isLowercase(c)) cntLowercase++;
   }

   if (cntUppercase > cntLowercase) {
      for (char &c: S) {
         if (isLowercase(c)) c -= 32;
      }

      cout << S << endl;
      return;
   }

   for (char &c: S) {
      if (isUppercase(c)) c += 32;
   }
   cout << S << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}
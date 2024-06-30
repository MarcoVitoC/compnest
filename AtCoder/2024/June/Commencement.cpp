#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   string S;
   cin >> S;

   map<char, int> ocr;
   for (char c: S) ocr[c]++;

   map<int, int> cnt;
   for (auto o: ocr) cnt[o.second]++;

   for (auto i: cnt) {
      if (i.second != 0 && i.second != 2) {
         cout << "No" << endl;
         return;
      }
   }
   cout << "Yes" << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}
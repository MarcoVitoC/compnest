#include <bits/stdc++.h>
using namespace std;

const int MAX = 5e5;

int main() {
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);

   int n;
   cin >> n;

   int s[MAX + 5];
   for (int i=0; i<n; i++) {
      cin >> s[i];
   }
   sort(s, s + n);

   int l = 0, r = n / 2, ans = n;
   while (l < n / 2 && r < n) {
      if (s[l] * 2 <= s[r]) l++, ans--;
      r++;
   }

   cout << ans << endl;

   return 0;
}
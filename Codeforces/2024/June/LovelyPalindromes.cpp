#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   string n;
   cin >> n;

   cout << n;
   reverse(n.begin(), n.end());
   cout << n << endl;

   return 0;
}
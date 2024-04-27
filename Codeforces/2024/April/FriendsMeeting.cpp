#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int a, b;
   cin >> a >> b;

   int diff = abs(a - b);
   int tirednessA = diff / 2;
   int tirednessB = diff - tirednessA;
   
   int x = tirednessA * (tirednessA + 1) / 2;
   int y = tirednessB * (tirednessB + 1) / 2;
   cout << x + y << endl;

   return 0;
}
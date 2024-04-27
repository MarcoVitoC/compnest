#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, m, z;
   cin >> n >> m >> z;

   cout << z / lcm(n, m) << endl;

   return 0;
}
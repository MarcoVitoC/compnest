#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
	int area1, area2, area3;
	cin >> area1 >> area2 >> area3;
	
	//parallelepiped surface area formula = 2(ab + bc + ac)
	int a = sqrt((area1 * area3) / area2);
	int b = sqrt((area1 * area2) / area3);
	int c = sqrt((area2 * area3) / area1);
	
	cout << 4 * (a + b + c) << endl;
}

int main(){
	solve();	
	return 0;
}

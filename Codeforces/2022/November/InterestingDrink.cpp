#include <bits/stdc++.h>
#define ll long long

using namespace std;

int binarySearch(int x[], ll m, int left, int right){
	int ans = 0;
	while (left <= right){
		int mid = left + (right - left) / 2;
		if (m >= x[mid]){ // if the searched number is strictly greater than the mid value, 
			ans = mid + 1; // then save it 
			left = mid + 1; // locate the greatest index with a value less than or equal to m to the right
		}else {
			right = mid - 1; // otherwise, go to the left
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	
	int x[n];
	for (int i=0; i<n; i++){
		cin >> x[i];
	}
	sort(x, x + sizeof(x)/sizeof(x[0]));
	
	int q;
	cin >> q;
	
	while (q--){
		ll m;
		cin >> m;
		
		cout << binarySearch(x, m, 0, n-1) << '\n';
	}
	
	return 0;
}

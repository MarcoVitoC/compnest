#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int p[n+1];
	for (int i=0; i<n; i++){
		cin >> p[i];
	}
	
	int maxDepth = 0; // temporary tree's depth when the tree is empty
	for (int i=0; i<n; i++){
		int countDepth = 1;
		int val = p[i];
		
		while (val != -1){ // if val = -1, then it will be root
			// count the tree's depth from the last node to node after root
			countDepth++;
			val = p[val-1]; 
		}
		maxDepth = (maxDepth > countDepth) ? maxDepth : countDepth; // update the maxDepth
	}
	
	cout << maxDepth << endl;
	return 0;
}

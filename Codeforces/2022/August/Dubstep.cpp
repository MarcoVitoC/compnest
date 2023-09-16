#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	string oriSong;
	for (int i=0; i<s.size(); i++){
		if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			i += 2;
		}else {
			oriSong += s[i];
			if (s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B'){
				oriSong += " ";
			}
		}
	}
	
	cout << oriSong << endl;
	return 0;
}

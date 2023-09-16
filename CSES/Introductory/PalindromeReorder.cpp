#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int alphabet[26] = {};
	for (int i=0; i<s.size(); i++){ // count occurrences of all characters
		alphabet[s[i] - 'A']++;
	}
	
	int count = 0;
	char oddChar;
	for (int i=0; i<26; i++){ // count odd occurrences
		if (alphabet[i] % 2 != 0){
			count++;
			oddChar = i + 'A'; // save the character that has an odd occurrence
		}
	}
	
	if (count > 1){ // if the odd occurrences is greater than 1, then its impossible to make palindrome string
		cout << "NO SOLUTION" << endl;
	}else {
		string first = "", second = "";
		for (int i=0; i<26; i++){
			string temp(alphabet[i] / 2, i + 'A'); // divide the number of characters by 2 because it needed to be inserted into 2 strings
			first += temp; // insert the temp string to the end of the first string
			second = temp + second; // insert the temp string to the beginning of the second string
		}
		
		string ans = "";
		if (count == 1){ // if there is an odd number of characters, then add it to the center of the answer
			ans = first + oddChar + second;
		}else { // otherwise, combine first and second string
			ans = first + second; 
		}
		
		cout << ans << endl;
	}
	return 0;
}

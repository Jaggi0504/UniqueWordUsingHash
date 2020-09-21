#include<bits/stdc++.h>
using namespace std;

void removeDW(char *input) {
	unordered_map<string, bool>um;
	istringstream ss(input);
	while(ss) {
		string word;
		ss>>word;
		if(um.count(word) > 0) {
			continue;
		}
		cout<<word<<" ";
		um[word] = false;
	}
}

int main() {
	char input[100];
	cin.getline(input, 100);
	removeDW(input);
	return 0;
}

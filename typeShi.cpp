#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

string findOriginalFile(vector<string> &fragments) {
   string result;
   map<string, int> fragmentCount;

   for (const string &fragment: fragments) {
      fragmentCount[fragment]++;
   }
   
   size_t minLen = fragments[0].size();
   size_t maxLen = fragments[0].size();
   for (const string &fragment: fragments) {
		minLen = min(minLen, fragment.size());
		maxLen = max(maxLen, fragment.size());
   }
   size_t originalLen = minLen + maxLen;
   
   for (const string &first: fragments) {
   		for (const string &second: fragments) {
   			if (first == second && fragmentCount[first] < 2) continue;
			
			string combined = first + second;
			if (combined.size() != originalLen) continue;
			map<string, int> tempCount = fragmentCount;
			
			bool valid = true;
			
			for (const string &f: fragments) {
				if (tempCount[f] == 0) continue;
				string pair = combined.substr(0, f.size());
				string remaining = combined.substr(f.size());
				
				if (tempCount[pair] > 0 && tempCount[remaining] > 0) {
					tempCount[pair]--;
					tempCount[remaining]--;
				} else {
					valid = false;
					break;
				}
			}
			if (valid) return combined;
		}
   }
   return "";
}

int main(void) {
	int testCases; cin >> testCases;
	cin.ignore();
	
	while(testCases--) {
		vector<string> fragments;
		string line;
		
		while (getline(cin, line)) {
			if (line.empty()) break;
			fragments.push_back(line);
		}
		
		string result = findOriginalFile(fragments);
		cout << result << endl;
		
		if (testCases) cout << endl;
	}
	return 0;
} 
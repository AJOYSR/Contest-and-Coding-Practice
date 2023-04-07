#include<bits/stdc++.h>
#include <stdio.h>
#include<cstring>
using namespace std;
map<char, int> freq;

int main() {
	string  s;
	int max;
	while (getline(cin,s))
        {
		freq.clear();
		max = -1;
		for (int i = 0; i < (int) s.size(); i++) {
			if (isalpha(s[i])) {
				if (freq.count(s[i]) == 0)
					freq[s[i]] = 1;
				else
					freq[s[i]] = freq[s[i]] + 1;
				if (max < freq[s[i]])
					max = freq[s[i]];
			}
		}

		map<char, int>::iterator it;
		for (it = freq.begin(); it != freq.end(); it++) {
			if (it->second == max)
				cout<< it->first;
		}
		cout<<" "<<max<<endl;

	}

	return 0;
}

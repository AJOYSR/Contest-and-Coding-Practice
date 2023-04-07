#include<iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
	char s[10001];
	long long int k, ans, i;

	while (true) {
		cin>>s;
		if (strcmp(s, "0") == 0)
			return 0;

		k = strlen(s);
		i = 0;
		ans = 0;
		while (k > 0) {
			ans += (s[i] - '0') * (pow(2, k) - 1);
			k--;
			i++;
		}
		cout<<ans<<endl;
	}

	return 0;
}

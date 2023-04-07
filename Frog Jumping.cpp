#include<bits/stdc++.h>
using namespace std;
#define ll long
#define pb push_back

long long tests,a,b,k;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>tests;
	while (tests--)
        {
		cin>>a>>b>>k;
		long long res=(k/2+k%2)*a-(k/2)*b;
		cout<<res<<endl;
	}

	return 0;
}



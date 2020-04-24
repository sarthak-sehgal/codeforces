#include<bits/stdc++.h>

using namespace std;

int main () {
	int t, n;
	cin>>t;
	while (t--) {
		cin>>n;
		if (n&1)
			cout<<n/2<<endl;
		else
			cout<<max(n/2-1, 0)<<endl;
	}
	return 0;
}
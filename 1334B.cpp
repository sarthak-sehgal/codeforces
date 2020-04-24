#include<bits/stdc++.h>

using namespace std;

int main () {
	int t, n, x;
	cin>>t;
	while (t--) {
		cin>>n>>x;
		vector<int> v(n);
		for (int i=0; i<n; i++) {
			cin>>v[i];
			v[i]-=x;
		}
		sort(v.begin(), v.end(), greater<int>());
		int res = 0, sum=0;
		for (res=0; res<n; res++) {
			sum+=v[res];
			if (sum<0)
			break;
		}
		cout<<res<<endl;
	}
	return 0;
}
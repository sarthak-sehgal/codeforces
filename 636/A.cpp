#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define all(x) begin(x), end(x)
#define loop(i,n) for(int i=0; i<n; i++)
#define rep(i,a,b,c) for(int i=a; i<b; i+=c)
#define tc(t) int t; cin>>t; while(t--)
#define sz(v) int((v).size())
#define pb push_back

int32_t main() {
	IOS;
	vector<int> v;
	int k=2;
	while ((long long)k*2<1000000009) {
		k*=2;
		v.push_back(k-1);
	}
	int x;
	tc (t) {
		cin>>x;
		loop(i, sz(v)) {
			if (x%v[i]==0) {
				cout<<x/v[i]<<endl;
				break;
			}
		}
	}

	return 0;
}
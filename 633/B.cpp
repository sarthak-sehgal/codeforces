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
	int n;
	tc (t) {
		cin>>n;
		vector<int> v(n);
		loop(i,n) cin>>v[i];
		sort(all(v));

		vector<int> res;
		int l=0, r=n-1;
		while (l<=r) {
			if (l==r) {
				res.pb(v[l]);
			} else {
				res.pb(v[r]);
				res.pb(v[l]);
			}
			l++;
			r--;
		}

		for (int i=res.size()-1; i>=0; i--) cout<<res[i]<<" ";
		cout<<endl;
	}

	return 0;
}
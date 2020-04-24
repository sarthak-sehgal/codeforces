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
#define int long long

int32_t main() {
	IOS;
	int n;
	tc (t) {
		cin>>n;
		vector<int> v(n);
		loop(i, n) cin>>v[i];
		int res = 0, maxLeft=v[0], maxDiff=0;
		rep (i, 1, n, 1) {
			if (v[i]<maxLeft) {
				maxDiff = max(maxDiff, maxLeft-v[i]);
			}
			maxLeft=max(v[i], maxLeft);
		}
		int sum=0, i=0;
		while (sum < maxDiff) {
			res++;
			sum+=1<<i;
			i++;
		}
		cout<<res<<endl;
	}

	return 0;
}

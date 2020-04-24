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
	int n, k;
	tc (t) {
		cin>>n>>k;
		vector<int> v(n);
		loop(i,n) cin>>v[i];
		vector<int> minSum(2*k+1, 0), maxSum(2*k+1, 0), sum(2*k+1,0);
		int l=0, r=n-1;
		while (l<=r) {
			sum[v[l]+v[r]]++;
			minSum[min(v[l],v[r])+1]++;
			maxSum[max(v[l],v[r])+k]++;
			l++;
			r--;
		}
		int res = INT_MAX;

		int currCount=0;
		rep(s,2,2*k+1,1) {
			currCount+=minSum[s];
			int t0 = currCount-sum[s];
			int t1 = n/2 - currCount;
			res = min(res, t0+2*t1);
			currCount-=maxSum[s];
		}

		cout<<res<<endl;
	}

	return 0;
}
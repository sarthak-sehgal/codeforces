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
	tc(t) {
		cin>>n>>k;
		vector<int> mounts(n);
		loop(i,n) cin>>mounts[i];
		vector<int> peeks(n);
		int peekCount = 0;
		unordered_set<int> peekIdx;
		int t=0, l=0;
		for (int i=0; i<n; i++) {
			while (i+1<n && mounts[i+1]<mounts[i]) {
				peeks[i]=peekCount;
				i++;
			}
			while (i+1<n && mounts[i+1]>mounts[i]) {
				peeks[i]=peekCount;
				i++;
			}
			if (i!=0 && i!=n-1) {
				peekCount++;
				peekIdx.insert(i);
			}
			peeks[i] = peekCount;
		}
		// loop(i,n) cout<<peeks[i]<<" ";
		// cout<<endl;
		for (int i=k-1; i<n; i++) {
			int x = peeks[i]-peeks[i-k+1];
			if (peekIdx.find(i)!=peekIdx.end()) x-=1;
			// cout<<i<<" "<<x<<endl;
			if (x>t) {
				t=x;
				l=i-k+1;
			}
		}
		cout<<t+1<<" "<<l+1<<endl;
	}

	return 0;
}
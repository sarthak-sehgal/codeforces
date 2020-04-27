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
	int n, x;
	tc(t) {
		cin>>n;
		vector<int> perm(n+1, 0);
		vector<int> permIdx(n+1, 0);
		loop(i,n) {
			cin>>x;
			permIdx[x]=i+1;
			perm[i+1] = x;
		}

		bool isPossible = true;
		vector<int> temp(n+1, -1);

		rep(i, 1, n+1, 1) {
			int t = permIdx[i];
			int j = i;
			while (t<n+1 && temp[t]==-1) temp[t++] = j++;
		}

		rep(i,1,n+1,1) {
			if (perm[i]!=temp[i]) {
				isPossible=false;
				break;
			}
		}

		if (isPossible) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}

	return 0;
}
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
	int n,a,b,c,d;
	tc(t) {
		cin>>n>>a>>b>>c>>d;
		int lo = a-b, hi = a+b;
		int tlo=c-d, thi = c+d;
		if (lo*n>thi || hi*n<tlo) {
			cout<<"No\n";
		} else {
			cout<<"Yes\n";
		}
	}

	return 0;
}
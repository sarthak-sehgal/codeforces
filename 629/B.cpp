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
	int n, k;
	tc (t) {
		cin>>n>>k;
		int temp = k, n2 = n;
		string s = "";
		int bLeft = 2;
		int numA;
		while ((long long)s.length() < n) {
			if (bLeft == 2) {
				numA = ((n2-1)*(n2-2))/2;
			} else if (bLeft == 1) {
				numA = n2-1;
			} else {
				numA = n2;
			}
			if (numA < temp) {
				temp -= numA;
				s+="b";
				bLeft--;
			} else {
				s+="a";
			}
			n2--;
		}

		cout<<s<<endl;
	}

	return 0;
}
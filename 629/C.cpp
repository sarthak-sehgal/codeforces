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
	string s;
	tc (t) {
		cin>>n;
		getline(cin, s);
		getline(cin, s);
		string a = "1", b = "1";
		bool isDiff = false;
		rep (i, 1, n, 1) {
			char c = s[i];
			if (c == '0') {
				a+='0';
				b+='0';
			} else if (c == '1') {
				if (isDiff) {
					a+='0';
					b+='1';
				} else {
					a+='1';
					b+='0';
					isDiff = true;
				}
			} else {
				if (isDiff) {
					a+='0';
					b+='2';
				} else {
					a+='1';
					b+='1';
				}
			}
		}

		cout<<a<<endl<<b<<endl;
	}

	return 0;
}
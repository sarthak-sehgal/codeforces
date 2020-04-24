#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define all(x) begin(x), end(x)
#define loop(i,n) for(int i=0; i<n; i++)
#define rep(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define tc(t) int t; cin>>t; while(t--)

int32_t main() {
	IOS;

	tc (t) {
		int n, x;
		cin>>n;
		vector<int> v;
		loop(i, n) {
			cin>>x;
			v.push_back(x);
		}

		int freq[27][n+1];
		loop(i, 27)
			loop(j, n+1)
				freq[i][j] = 0;

		loop(i, 27)
			rep (j, 1, n+1, 1)
				freq[i][j] = freq[i][j-1] + (v[j-1]==i ? 1 : 0);

		int res = 0;
		// loop(i, 27) {
		// 	loop(j, n+1)
		// 		cout<<freq[i][j]<<" ";
		// 	cout<<endl;
		// }
		loop(i, n) {
			rep(j, i, n, 1) {
				int countIn=0, countOut=0;
				loop (k, 27) {
					countIn = max(countIn, freq[k][j+1]-freq[k][i]);
					countOut = max(countOut, 2*min(freq[k][i], freq[k][n]-freq[k][j+1]));
				}
				res = max(res, countIn + countOut);
			}
		}

		cout<<res<<endl;
	}
	return 0;
}
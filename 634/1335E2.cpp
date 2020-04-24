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
	tc(t) {
		int n, x;
		cin>>n;
		vector<int> v;
		loop(i, n) {
			cin>>x;
			v.push_back(x);
		}

		int freq[201][n+1];
		vector<vector<int>> pos(201);
		memset(freq, 0, sizeof(freq)/sizeof(int));

		rep(i, 1, n+1, 1) {
			loop (j, 201) {
				freq[j][i] = freq[j][i-1];
			}
			freq[v[i-1]][i]++;
			pos[v[i-1]].push_back(i-1);
		}

		int res=0;
		loop(i, 201) {
			res = max(res, sz(pos[i]));
			loop (j, sz(pos[i])/2) {
				int start = pos[i][j]+1, end=pos[i][sz(pos[i])-j-1]-1;
				int countOut = (j+1)*2, countIn = 0;
				loop(k, 201) {
					countIn = max(countIn, freq[k][end+1]-freq[k][start]);
				}
				res = max(res, countOut+countIn);
			}
		}

		cout<<res<<endl;
	}

	return 0;
}
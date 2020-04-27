// Recursion with Memo giving TLE

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

vector<string> nums = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
string res = "";
vector<vector<int>> memo;
vector<vector<int>> dist;

bool helper (vector<string>& inp, int idx, int sticksRemaining, string tillNow) {
	if (idx>=inp.size()) {
		if (sticksRemaining==0) {
			memo[idx][sticksRemaining] = 1;
			res = tillNow;
			return true;
		}
		memo[idx][sticksRemaining] = 0;
		return false;
	}

	if (memo[idx][sticksRemaining]!=-1)
		return memo[idx][sticksRemaining];

	for (int i=9; i>=0; i--) {
		int sticksCnt = dist[idx][i];
		if (sticksCnt==-1)
			continue;
		if (sticksRemaining-sticksCnt>=0) {
			if(helper(inp, idx+1, sticksRemaining-sticksCnt, tillNow+to_string(i))) {
				memo[idx][sticksRemaining] = 1;
				return true;
			}
		}
	}

	memo[idx][sticksRemaining] = 0;
	return false;
}

int32_t main() {
	IOS;
	int n, k;

	cin>>n>>k;
	vector<string> inp(n);
	dist = vector<vector<int>>(n, vector<int>(10, 0));
	memo = vector<vector<int>>(n+1, vector<int>(k+1, -1));

	string s;
	loop(i, n) {
		cin>>inp[i];
		loop(j, 10) {
			loop(l, 7) {
				char x = inp[i][l];
				char y = nums[j][l];
				if(x=='1' && y=='0') {
					dist[i][j] = -1;
					break;
				}
				if (x=='0' && y=='1')
					++dist[i][j];
			}
		}
	}

	helper(inp, 0, k, "");

	if (res.compare("")==0)
		cout<<-1<<endl;
	else
		cout<<res<<endl;
	return 0;
}
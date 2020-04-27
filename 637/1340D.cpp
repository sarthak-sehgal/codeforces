// DP solution

#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define all(x) begin(x), end(x)
#define loop(i,n) for(int i=0; i<n; i++)
#define rep(i,a,b,c) for(int i=a; i<b; i+=c)
#define brep(i,a,b,c) for(int i=a; i>b; i-=c)
#define tc(t) int t; cin>>t; while(t--)
#define sz(v) int((v).size())
#define pb push_back

vector<string> nums = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

int32_t main() {
	IOS;
	int n, k;
	cin>>n>>k;

	vector<string> inp(n);
	vector<vector<int>> dist(n, vector<int>(10, 0));

	// dp[i][j] = whether i..n boards can be turned on using exactly j sticks
	vector<vector<bool>> dp(n+1, vector<bool>(k+1, false));
	dp[n][0] = 1;

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

	brep(i, n, 0, 1) {
		loop(j, k+1) {
			if (dp[i][j]) {
				loop(l, 10) {
					if (dist[i-1][l]==-1 || j+dist[i-1][l]>k) continue;
					dp[i-1][j+dist[i-1][l]] = true;
				}
			}
		}
	}

	if (dp[0][k] == 0) {
    cout<<"-1\n";
    return 0;
  }

	for (int i = 0; i < n; i++) {
    int now = -1;
    for (int d = 9; d >= 0; d--) {
      if (dist[i][d] != -1 && k >= dist[i][d] && dp[i + 1][k - dist[i][d]]) {
        now = d;
        k -= dist[i][d];
        break;
      }
    }
    cout << now;
  }

	cout<<endl;
	return 0;
}
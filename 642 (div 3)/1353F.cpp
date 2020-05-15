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
#define int long long

/*
    Idea: See editorial
*/

int n, m;

int32_t main() {
    IOS;
    tc(t) {
        cin>>n>>m;
        vector<vector<int>> a(n, vector<int>(m));

        loop(i, n)
            loop(j, m)
                cin>>a[i][j];

        int ans = 1e18;
        int a00 = a[0][0];

        loop(x, n) {
            loop(y, m) {
                int need = a[x][y] - x - y;
                if (need > a00) continue;

                a[0][0] = need;
                vector<vector<int>> dp(n, vector<int>(m, 1e18));

                dp[0][0] = a00 - need;
                loop(i, n) {
                    loop(j, m) {
                        int need = a[0][0] + i + j;
                        if (need > a[i][j]) continue;

                        if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + a[i][j] - need);
                        if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + a[i][j] - need);
                    }
                }
                ans = min(ans, dp[n - 1][m - 1]);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
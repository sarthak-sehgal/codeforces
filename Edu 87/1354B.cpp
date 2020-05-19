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

/*
    Idea:
*/

int n, a, b, c;
vector<int> val;

int solve() {
    return 0;
}

int32_t main() {
    IOS;
    string s;
    tc(t) {
        cin>>s;
        vector<int> cnt(4, 0);
        int res = INT_MAX;

        for (int i=0, j=0; i<s.length(); i++) {
            cnt[s[i]-'0']++;
            while (cnt[1] && cnt[2] && cnt[3]) {
                res = min(res, i-j+1);
                cnt[s[j]-'0']--;
                j++;
            }
        }

        if (res==INT_MAX) cout<<0<<endl;
        else cout<<res<<endl;
    }

    return 0;
}
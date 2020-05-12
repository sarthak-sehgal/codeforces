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

void check(vector<int>& res) {
    int n = res.size();
    if (abs(res[n-1]-res[n-2])==1) {
        swap(res[n-2], res[n-3]);
        swap(res[n-1], res[n-3]);
    }
}

int32_t main() {
    IOS;
    int n;
    tc(t) {
        cin>>n;
        if (n<4) {
            cout<<-1<<endl;
            continue;
        }

        vector<int> res;

        int i = 2, j = 1;
        while (i<=n || j<=n) {
            if (i<=n) {
                res.pb(i);
                i+=2;
                check(res);
                if (i<=n) {
                    res.pb(i);
                    check(res);
                    i+=2;
                }
            }
            if (j<=n) {
                res.pb(j);
                check(res);
                j+=2;
                if (j<=n) {
                    res.pb(j);
                    check(res);
                    j+=2;
                }
            }
        }
        loop(i, n) cout<<res[i]<<" ";
        cout<<endl;
    }

    return 0;
}
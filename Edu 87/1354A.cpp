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
    Idea:
*/

int n, a, b, c, d;
vector<int> val;

int solve() {
    return 0;
}

int32_t main() {
    IOS;
    tc(t) {
        cin>>a>>b>>c>>d;
        if (b>=a) {
            cout<<b<<endl;
        } else {
            if (d>=c) {
                cout<<-1<<endl;
            } else {
                int res = b;
                a-=b;
                int k = ceil((double)a/(double)(c-d));
                res+=k*c;
                // while (a>0) {
                //     res+=c;
                //     a-=(c-d);
                // }
                cout<<res<<endl;
            }
        }
    }

    return 0;
}
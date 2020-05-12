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

int32_t main() {
    IOS;
    int n;
    tc(t) {
        cin>>n;
        vector<int> v(n);
        vector<int> pre(n+1, 0);
        vector<bool> diff(n+1, false);
        loop(i, n) {
            cin>>v[i];
            pre[i+1] = v[i] + pre[i];
            if (i>0) {
                for (int j=i-1; j>=0; j--) {
                    if (pre[i+1]-pre[j]>0 && pre[i+1]-pre[j]<=n)
                        diff[pre[i+1]-pre[j]] = true;
                }
            }
        }
        int res = 0;
        loop(i, n) {
            if(diff[v[i]])
                res++;
        }

        cout<<res<<endl;
    }

    return 0;
}
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
        vector<int> res;
        int k = 1;
        while (n>0) {
            int t = n%10;
            if (t>0) res.push_back(t*k);
            k*=10;
            n/=10;
        }

        cout<<res.size()<<endl;
        for (auto i : res) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}
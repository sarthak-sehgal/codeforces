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
    int a1,b1,a2,b2;
    tc(t) {
        cin>>a1>>b1>>a2>>b2;
        if (a1>b1)
            swap(a1, b1);
        if (a2>b2)
            swap(a2, b2);

        if (b1==b2 && a1+a2==b1) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
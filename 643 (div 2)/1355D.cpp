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

int n, s;
vector<int> val;

int solve() {
    return 0;
}

int32_t main() {
    IOS;
    cin>>n>>s;
    if (s>=2*n) {
        cout<<"YES\n";
        loop(i, n-1) cout<<2<<" ";
        cout<<s-2*(n-1)<<endl;
        cout<<1<<endl;
        return 0;
    }

    cout<<"NO\n";

    return 0;
}
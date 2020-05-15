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
        n=1, ans is 0
        n=2, ans is m as you can place "m 0"
        n>=3, place 0 m 0 to get ans = 2*m which is the maximum possible answer
*/

int n, m;
vector<int> val;

int32_t main() {
    IOS;
    tc(t) {
        cin>>n>>m;
        if (n==1) {
            cout<<0<<endl;
            continue;
        }
        if (n==2) {
            cout<<m<<endl;
            continue;
        }
        cout<<m*2<<endl;
    }

    return 0;
}
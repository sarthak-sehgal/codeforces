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
    Idea: Greedily buy food with burles in the power of 10. Then when burles<10, simply spend them all.
*/

int32_t main() {
    IOS;
    int n;
    tc(t) {
        cin>>n;
        int res = 0;
        while (n>=10) {
            int k = n/10;
            k*=10;
            res+=k;
            n = n/10 + n%10;
        }
        res+=n;
        cout<<res<<endl;
    }

    return 0;
}
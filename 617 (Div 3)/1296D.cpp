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
    Idea: If a can kill the monster, simply increasing the count by 1. Else, add to an ordered multiset the number of chances which b should skip to enable a to kill the monster. At the end, iterate through this set and decrease k accordingly.
*/

int32_t main() {
    IOS;
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    int sum = a+b;
    vector<int> h(n);
    multiset<int> S;
    int res = 0;
    loop(i, n) {
        cin>>h[i];
        int x = ceil((double)h[i]/(double)sum)-1;
        h[i] = h[i]-x*sum;
        if (h[i]<=a) {
            res++;
            continue;
        } else {
            h[i] -= a;
            S.insert(ceil((double)h[i]/(double)a));
        }
    }
    for (auto x : S) {
        if (k>=x) {
            k-=x;
            res++;
        } else break;
    }

    cout<<res<<endl;

    return 0;
}
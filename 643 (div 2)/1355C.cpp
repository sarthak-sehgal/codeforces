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
    Idea: For each x, the sum of x+y possible would range from x+B to x+C. So let's have a prefix array which stores indicates the possibility of sum from x+B to x+C. Note that this prefix array denotes the number of ways to attain the sum (x+y). Now, iterate over this prefix array and when sum gets > C, we can choose values of z to satisfy the triangle property x+y>z. Now, if sum is S, we can choose any z: C, C+1, C+2,..., S-1.
    Take care of when the sum goes > D. In this case, we can choose any z from C to D.
*/

int n, a, b, c, d;
vector<int> val;

int solve() {
    return 0;
}

int32_t main() {
    IOS;
    cin>>a>>b>>c>>d;

    vector<int> pre(1e6+2, 0);

    rep(x, a, b+1, 1) {
        pre[x+b]++;
        pre[x+c+1]--;
    }

    long long cnt=0, res=0;
    loop(i, sz(pre)) {
        cnt+=pre[i];
        if (i>c) {
            res += cnt*(min(d+1, i)-c);
        }
    }

    cout<<res<<endl;

    return 0;
}
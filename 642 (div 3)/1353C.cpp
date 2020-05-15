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
    Idea: as n is odd, collect all figures in the middle of the boaord (see hash)
    * * * * *
    * * * * *
    * * # * *
    * * * * *
    * * * * *
*/

int n, a, b, c;
vector<int> val;

int32_t main() {
    IOS;
    tc(t) {
        cin>>n;
        ll sum = 0;

        int k = n/2;

        for (int i=k; i>=1; i--) {
            sum += (i*2-1)*i;
        }

        sum*=4;

        ll x = 0;
        k=1;
        loop(i, n/2) {
            x+=k;
            k++;
        }

        sum += x*4;

        cout<<sum<<endl;
    }

    return 0;
}
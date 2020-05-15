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
    Idea: sort and greedily select a[i] or b[j] (whichever is greater) until you can swap. Once k<0, select remaining a[i]
*/

int n, a, b, c,k;
vector<int> val;

int32_t main() {
    IOS;
    tc(t) {
        cin>>n>>k;
        vector<int> a(n), b(n);
        loop(i, n) cin>>a[i];
        loop(i, n) cin>>b[i];

        sort(all(a));
        sort(all(b));

        ll sum = 0;
        int i=n-1, j=n-1;
        while (n--) {
            if(a[i]>=b[j]||j<0||k<=0) {
                sum+= a[i];
                i--;
                continue;
            }
            k--;
            sum+= b[j];
            j--;
        }

        cout<<sum<<endl;
    }

    return 0;
}
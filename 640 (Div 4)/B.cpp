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
    int n, k;
    tc(t) {
        cin>>n>>k;
        int mod = n%k;
        int div = n/k;

        if (k>n) {
            cout<<"NO\n";
            continue;
        }

        if (mod == 0) {
            cout<<"YES"<<endl;
            loop(i, k) cout<<div<<" ";
            cout<<endl;
            continue;
        }

        if ((div%2 == 0 && (div+mod)%2 == 0) || (div%2 != 0 && (div+mod)%2 != 0)) {
            cout<<"YES"<<endl;
            loop(i, k-1) cout<<div<<" ";
            cout<<div+mod<<"\n";
            continue;
        }

        if (div == 1 || k%2 == 0) {
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";
        loop(i, k-1) {
            if (i%2==0) cout<<div-1<<" ";
            else cout<<div+1<<" ";
        }
        cout<<div+mod<<endl;
    }

    return 0;
}
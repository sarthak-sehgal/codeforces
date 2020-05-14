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
    Idea: If curren total sum is odd, simply return yes. Else total sum is even. An even sum can only be made odd by making an even number as odd or an odd number as even so check the presence of both even and odd numbers.
*/

int32_t main() {
    IOS;
    int n,x;
    tc(t) {
        cin>>n;
        int sum = 0;
        bool isOdd = false;
        bool isEven = false;
        loop(i, n) {
            cin>>x;
            sum+=x;
            if (x%2==0) isEven = true;
            else isOdd = true;
        }

        if (sum%2!=0 || (isOdd && isEven)) {
            cout<<"YES\n";
        } else cout<<"NO\n";
    }

    return 0;
}
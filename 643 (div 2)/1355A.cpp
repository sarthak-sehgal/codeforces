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
    Idea: Brute force solution. Pruning: Stop the loop when mindigit reaches 0 as the number will not change then!!
*/

int n, a, b, c;
vector<int> val;

int solve() {
    return 0;
}

int32_t main() {
    IOS;
    int k;
    tc(t) {
        cin>>n>>k;
        k--;
        int mindigit = 10;
        int maxdigit = -1;

        while (k-- && mindigit != 0) {
            int t = n;
            mindigit=10, maxdigit=-1;

            while(n>0) {
                mindigit = min(mindigit, n%10);
                maxdigit = max(maxdigit, n%10);
                n/=10;
            }
            n = t + mindigit*maxdigit;
        }
        cout<<n<<endl;
    }

    return 0;
}
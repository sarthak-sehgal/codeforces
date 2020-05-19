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
#define PI 3.14159265

int32_t main() {
    IOS;
    int n;
    tc(t) {
        cin>>n;
        double res = 0;
        double a = ((double)(n-1)*(180))/(double)n;
        double b = 180 - a;
        // cout<<a<<" "<<b<<endl;
        for (double i=0; i<(n-2)/2; i++) {
            double angle = 180 - (a-i*b);
            angle = (angle*PI)/180;
            res += cos(angle);
        }

        res=res*2+1;

        printf("%.9f\n", res);
    }

    return 0;
}
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
    int n0, n1, n2;
    tc(t) {
        cin>>n0>>n1>>n2;
        string s1 = "";
        bool isOne = true;
        int t1 = n1;
        if(n1>0) {
            loop(i, n1+1) {
                s1+=isOne?"1":"0";
                isOne = !isOne;
            }
        }
        string res="";
        if (n2>0) {
            int t2 = n1 > 0 ? n2-1 : n2;
            loop(i, t2+1) res+="1";
        }
        res+=s1;
        if (n0>0) {
            int t0 = n1>0 ? n0-1 : n0;
            if (n1>0 && !isOne)
                res.pop_back();
            loop(i, t0+1) res+="0";
            if (n1>0 && !isOne)
                res+="1";
        }

        cout<<res<<endl;
    }

    return 0;
}
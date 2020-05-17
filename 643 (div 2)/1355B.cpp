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
    Idea: Greedy based. Evident from code.
*/

int n, a, b, c;
vector<int> val;

int solve() {
    return 0;
}

int32_t main() {
    IOS;

    tc(t) {
        cin>>n;
        vector<int> v(n);
        loop(i, n) cin>>v[i];
        sort(all(v)); // sorting is important!

        int cnt = 0, i=0;
        while (i<n) {
            int currCnt = 0, currMax = 1;
            while (currMax>currCnt && i<n) {
                currMax = v[i];
                currCnt++;
                i++;
            }
            if(currMax<=currCnt) {
                cnt++;
            } else {
                break;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
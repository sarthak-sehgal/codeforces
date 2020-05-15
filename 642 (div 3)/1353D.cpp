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
    Idea: evident from code
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
        vector<int> res(n, 0);
        auto comp = [](pair<int,int> a, pair<int,int> b) {
            int diff1= a.second-a.first;
            int diff2 = b.second-b.first;
            if(diff1==diff2) return a.first>b.first;
            return diff1<diff2;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comp)> pq(comp);

        pq.push({0, n-1});
        int k = 1;
        while (k!=n+1) {
            auto t = pq.top();
            pq.pop();
            int l = t.first, r = t.second;
            int m = l+(r-l)/2;
            if (res[m]!=0) continue;
            res[m] = k++;
            pq.push({l, m-1});
            pq.push({m+1, r});
        }
        loop(i, n) cout<<res[i]<<" ";
        cout<<endl;
    }

    return 0;
}
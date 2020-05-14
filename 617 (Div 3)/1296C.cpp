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
    Idea: Find the shortest length cycle
*/

int32_t main() {
    IOS;
    int n, currPos;
    string s;
    tc(t) {
        int x=0, y=0;
        cin>>n;
        cin>>s;
        currPos = 1;
        unordered_map<int,unordered_map<int, int>> vis;
        vis[0][0] = 0;
        int l = 0, r = 0, len = INT_MAX;
        loop(i, n) {
            char c = s[i];
            if (c=='L') {
                x-=1;
            } else if (c=='R') {
                x+=1;
            } else if (c=='U') {
                y+=1;
            } else if (c=='D') {
                y-=1;
            }
            if(vis.find(x) != vis.end() && vis[x].find(y)!=vis[x].end()) { // cycle!!
                int beg = vis[x][y]+1;
                int end = currPos;
                if (end-beg+1<len) {
                    len = end-beg+1;
                    r = end;
                    l = beg;
                }
            }
            vis[x][y] = currPos;
            currPos++;
        }

        if (len!=INT_MAX) {
            cout<<l<<" "<<r<<endl;
        } else cout<<-1<<endl;
    }

    return 0;
}
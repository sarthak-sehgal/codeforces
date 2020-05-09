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
    string s;
    tc(t) {
        cin>>s;
        unordered_map<string, unordered_map<string, bool>> vis;
        pii st = {0,0};
        pii end = {0,0};
        int res = 0;
        for (char c : s) {
            swap(st, end);
            if (c=='N') {
                end.first = st.first;
                end.second = st.second+1;
            } else if (c == 'S') {
                end.first = st.first;
                end.second = st.second-1;
            } else if (c=='W') {
                end.first = st.first-1;
                end.second = st.second;
            } else {
                end.first = st.first+1;
                end.second = st.second;
            }

            string str1 = to_string(st.first) + "," + to_string(st.second);
            string str2 = to_string(end.first) + "," + to_string(end.second);

            if (vis[str1][str2] || vis[str2][str1]) res+=1;
            else {
                vis[str1][str2] = vis[str2][str1] = true;
                res+=5;
            }
        }

        cout<<res<<endl;
    }

    return 0;
}
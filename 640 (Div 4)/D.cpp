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
    int n;
    tc(t) {
        cin>>n;
        vector<int> candies(n);
        loop(i, n) cin>>candies[i];

        int a = candies[0], b = 0, moves = 1;
        int prevA = a, prevB = 0;
        for (int i=0, j=n; i<j; ) {
            int t = 0;
            j--;
            if (j>i) moves++;
            // cout<<"prevA: "<<prevA<<endl;
            while (j>i && t<=prevA) {
                // cout<<j<<" ";
                t += candies[j];
                b += candies[j];
                j--;
            }
            // cout<<endl;
            if (i==j) break;
            j++;
            prevB = t;

            i++;
            if (i<j) moves++;
            t = 0;
            // cout<<"prevB: "<<prevB<<endl;
            while (i<j && t<=prevB) {
                // cout<<i<<" ";
                t += candies[i];
                a += candies[i];
                i++;
            }
            // cout<<endl;
            if (i==j) break;
            i--;
            // cout<<i<<endl;
            prevA = t;
        }

        cout<<moves<<" "<<a<<" "<<b<<"\n";
    }

    return 0;
}
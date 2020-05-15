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
    Soln by @mikeleven
    Idea: We are considering all series which have same value of i%k. Consider one of those series: 1 0 0 1
    Let total number of 1s in the whole input string be "sum"
    Now, we iterate this particular series and try to switch on all. When number is 1, on++ and curr++ else off++ and curr--. Whenever curr<0, it will not be profitable to continue to switch on, so we try to start from the next index now.
    Consider sum=10, let's see these iterations:
    1 -> currAns = 9 as we have to keep this one on and switch off all others
    1 0 -> currAns = 10 as we have to keep the 1 on and also switch on the 0
    1 0 0 -> now, curr<0. Notice that currAns=11 which is greater than the worst case ans (switch off all 1s in the string)! Hence, we stop switching on all 0s in these series and instead start from the next number. So currAns = 10
    1 0 0 1 -> currAns = 9 (switch off all except the current 1)
*/

int n, k;
vector<int> pre;
string s;

int32_t main() {
    IOS;
    tc(t) {
        cin>>n>>k>>s;

        int sum = 0;
        loop(i, n)
            sum+=s[i]-'0';

        int ans = sum;

        loop (i, k) {
            int cur = 0, ma = 0, on = 0, off=0;

            for(int j=i;j<n;j+=k) {
                if(s[j]=='1'){cur++; on++;}
                else {cur--;off++;}

                if(cur<0){
                    cur = 0; on = 0; off = 0;
                }

                int tot = sum - on + off;
                ans = min(ans, tot);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
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
    Idea: Do bubble sort (pick up the largest element and push it to its correct position). While doing this, if the element picked is assigned color 0, all the element on its right until the correct position of that element should be 1. Similarly if it is assigned color 1, they should be 0. If there is a contradiction at any stage, it is not possible to sort the string.
*/

int32_t main() {
    IOS;
    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp = s;
    vector<int> v(n, -1);
    bool isPossible = true;
    loop(i, n) {
        int maxElem=-1, maxElemIdx=-1;
        // get max elem
        loop(j,n-i) {
            if(s[j]>=maxElem) {
                maxElem = s[j];
                maxElemIdx = j;
            }
        }

        int endPos = n-i-1;
        if (maxElemIdx==endPos) continue;

        int k = v[maxElemIdx];
        if (k==-1) k=0;
        v[maxElemIdx] = k;
        int x = k==0 ? 1 : 0;
        rep(j, maxElemIdx+1, endPos+1, 1) {
            if(v[j]==-1) v[j]=x;
            if (v[j]!=x) isPossible = false;
        }
        if(!isPossible) break;

        // swap
        rep(j, maxElemIdx, endPos, 1) {
            swap(v[j], v[j+1]);
            swap(s[j], s[j+1]);
        }
    }

    if (!isPossible) {
        cout<<"NO\n";
        return 0;
    }

    cout<<"YES\n";

    // cout<<s<<endl;
    // loop(i,n) cout<<v[i];
    // cout<<endl;

    vector<int> idx(26, -1);
    loop(i, n) {
        if (idx[s[i]-'a']==-1) idx[s[i]-'a']=i;
    }

    loop(i, n) {
        if (v[idx[temp[i]-'a']]==-1) cout<<0;
        else cout<<v[idx[temp[i]-'a']];
        idx[temp[i]-'a']++;
    }
    cout<<endl;

    return 0;
}
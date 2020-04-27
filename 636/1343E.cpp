#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define all(x) begin(x), end(x)
#define loop(i,n) for(int i=0; i<n; i++)
#define rep(i,a,b,c) for(int i=a; i<b; i+=c)
#define tc(t) int t; cin>>t; while(t--)
#define sz(v) int((v).size())
#define pb push_back
#define int long long

vector<vector<int>> graph;

void bfs (int node, vector<int>& dist) {
	dist[node] = 0;
	queue<int> q;
	q.push(node);

	while (!q.empty()) {
		int t = q.front();
		q.pop();
		for (auto v : graph[t]) {
			if (dist[v]==INT_MAX) {
				dist[v] = dist[t]+1;
				q.push(v);
			}
		}
	}
}

int32_t main() {
	IOS;
	int n, m, a, b, c, u, v;
	tc(t) {
		cin>>n>>m>>a>>b>>c;
		a--,b--,c--;

		vector<int> p(m);
		loop(i,m) cin>>p[i];
		sort(all(p));
		vector<int> pref(m+1, 0);
		loop(i, m) pref[i+1] = pref[i] + p[i];

		graph = vector<vector<int>>(n);
		loop(i,m) {
			cin>>u>>v;
			u--, v--;
			graph[u].pb(v);
			graph[v].pb(u);
		}

		vector<int> dA(n, INT_MAX), dB(n, INT_MAX), dC(n, INT_MAX);
		bfs(a, dA);
		bfs(b, dB);
		bfs(c, dC);

		// loop(i,n) cout<<dA[i]<<" ";
		// cout<<endl;
		// loop(i,n) cout<<dB[i]<<" ";
		// cout<<endl;
		// loop(i,n) cout<<dC[i]<<" ";
		// cout<<endl;
		int res = 1e18;
		loop(i, n) {
			if (dA[i]+dB[i]+dC[i]<=m) {
				res = min(res, pref[dB[i]]+pref[dA[i]+dB[i]+dC[i]]);
			}
		}

		cout<<res<<endl;
	}

	return 0;
}
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

vector<int> parentArr, t_in, t_out, lvl;
vector<vector<int>> tree;
int T = 0;

void dfs (int node, int parent=-1, int depth=0) {
	lvl[node] = depth;
	t_in[node] = T++;
	parentArr[node] = parent;
	for (auto i : tree[node]) {
		if (i==parent) continue;
		dfs(i, node, depth+1);
	}
	t_out[node] = T++;
}

bool isAncestor (int anc, int child) {
	return t_in[anc]<=t_in[child] && t_out[anc]>=t_out[child];
}

int32_t main() {
	IOS;
	int n, m, u, v, t;
	cin>>n>>m;
	tree = vector<vector<int>>(n);
	parentArr = vector<int>(n);
	t_in = vector<int>(n);
	t_out = vector<int>(n);
	lvl = vector<int>(n);

	loop(i,n-1) {
		cin>>u>>v;
		u--, v--;
		tree[u].pb(v);
		tree[v].pb(u);
	}

	dfs(0);

	loop (i, m) {
		cin>>t;
		vector<int> query(t);
		int farthest = 0, dist=0;
		loop(j, t) {
			cin>>query[j];
			query[j]-=1;
			if (query[j]==0) continue;
			if (lvl[query[j]]>dist) {
				dist = lvl[query[j]];
				farthest=query[j];
			}
			query[j] = parentArr[query[j]];
		}

		bool isPossible = true;
		loop(j, t) {
			if (isAncestor(query[j], farthest)) continue;
			isPossible = false;
			break;
		}

		if (isPossible) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}
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

vector<bool> vis;
vector<int> diff;

int dfs (vector<vector<int>>& graph, int node, int level) {
	int subtreeSize = 0;
	for (auto v : graph[node]) {
		if (!vis[v]) {
			vis[v] = 1;
			subtreeSize += 1 + dfs(graph, v, level+1);
		}
	}

	diff[node] = subtreeSize - level;
	return subtreeSize;
}

int32_t main() {
	IOS;
	int n, k, u, v;
	cin>>n>>k;
	vector<vector<int>> graph(n);
	vis = vector<bool>(n, 0);
	diff = vector<int>(n, 0);

	loop (i, n-1) {
		cin>>u>>v;
		graph[u-1].pb(v-1);
		graph[v-1].pb(u-1);
	}

	vis[0] = 1;
	dfs(graph, 0, 0);
	auto cmp = [](int a, int b) {return a>b;};

	nth_element(diff.begin(), diff.begin()+n-k, diff.end(), cmp);
	cout<<accumulate(diff.begin(), diff.begin()+n-k, (long long)0)<<endl;

	return 0;
}
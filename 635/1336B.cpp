#include<bits/stdc++.h>
using namespace std;

typedef long long lld;

int main() {
	int t, x, n, m;
	cin>>t;

	while (t--) {
		cin>>x>>n>>m;
		bool isPossible = true;
		while (x>0) {
			if (n==0 && m==0) {
				isPossible = false;
				break;
			}
			if (x<=m*10) {
				isPossible = true;
				break;
			}
			if (n>0 && x/2+10 < x) {
				n--;
				x = x/2 + 10;
			} else if (m>0) {
				x -= 10;
				m--;
			} else {
				isPossible = false;
				break;
			}
		}
		if (isPossible)
			cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}

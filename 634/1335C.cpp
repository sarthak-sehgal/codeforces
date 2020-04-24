#include<bits/stdc++.h>

using namespace std;

int main () {
	int t, n, skill;
	cin>>t;
	while (t--) {
		cin>>n;
		vector<int> v(n+1, 0);
		int maxCount=0, skillCount=0;
		for (int i=0; i<n; i++) {
			cin>>skill;
			if (!v[skill])
				skillCount++;
			v[skill]++;
			maxCount = max(maxCount, v[skill]);
		}
		if (n<2) {
			cout<<0<<endl;
			continue;
		}
		if (maxCount == skillCount) {
			cout<<maxCount-1<<endl;
		} else if (maxCount == skillCount-1) {
			cout<<maxCount<<endl;
		} else if (maxCount-1 == skillCount) {
			cout<<maxCount-1<<endl;
		} else if (maxCount > skillCount) {
			cout<<skillCount<<endl;
		} else {
			cout<<maxCount<<endl;
		}
	}
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main () {
	int t, n, p, c, prevP, prevC;
	cin>>t;

	while (t--) {
		cin>>n;
		prevP=-1;
		prevC=-1;
		bool ans = true;
		while (n--) {
			cin>>p>>c;
			if (c>p)
				ans = false;
			if (prevP!=-1 && prevC!=-1) {
				if (p-prevP<c-prevC || p-prevP<0 || c-prevC<0)
					ans = false;
			}
			prevP = p;
			prevC = c;
		}
		if (ans)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}
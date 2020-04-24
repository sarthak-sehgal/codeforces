#include<bits/stdc++.h>

using namespace std;

int main () {
	int t, a, n, b;
	cin>>t;
	while (t--) {
		cin>>n>>a>>b;
		string s = "";
		char c = 'a';
		int t = b;
		for (int i=0; i<n; i++, b--) {
			if (b>0) {
				s += c++;
			} else {
				if (i-a>=0)
					s+=s[i-a];
				else
					s+=s[i-t];
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
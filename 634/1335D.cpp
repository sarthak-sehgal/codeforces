#include <bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin>>t;
	while (t--) {
		vector<string> v(9);
		for (int i=0; i<9; i++) {
			cin>>v[i];
		}
		v[0][0]=v[0][1];
		v[1][3]=v[1][4];
		v[2][6]=v[2][7];

		v[3][1]=v[3][2];
		v[4][4]=v[4][5];
		v[5][7]=v[5][8];

		v[6][2]=v[6][1];
		v[7][5]=v[7][4];
		v[8][8]=v[8][7];

		for (int i=0; i<9; i++) {
				cout<<v[i]<<"\n";
		}
	}
	return 0;
}
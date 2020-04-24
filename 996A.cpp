#include<bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin>>n;
	int notes[] = {1, 5, 10, 20, 100};
	int res = 0;

	while (n>0) {
		for (int j=4;j>=0; j--) {
			if (n>=notes[j]) {
				int k = n/notes[j];
				n -= notes[j]*k;
				res+=k;
				break;
			}
		}
	}

	cout<<res<<endl;
}
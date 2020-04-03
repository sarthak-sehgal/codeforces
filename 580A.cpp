#include<bits/stdc++.h>

typedef long long int bigInt;

using namespace std;

int main () {
	int n, a, prev=-1, res=1, len=0;
	cin>>n;

	while (n--) {
		cin>>a;
		if (a>=prev)
			len++;
		else
			len=1;
		prev=a;
		res=max(res, len);
	}
	cout<<res<<"\n";
  return 0;
}


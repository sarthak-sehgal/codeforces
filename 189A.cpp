#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
	int n, a, b, c, x, y, z;
	x=y=z=-1;
	cin>>n>>a>>b>>c;
	vector<int> v(n+1);
	v[0] = 0;
	
	for (int i=1; i<=n; i++) {
		if (i>=a)
			x=v[i-a];
		if (i>=b)
			y=v[i-b];
		if (i>=c)
			z=v[i-c];
 
		if (x==-1 && y==-1 && z==-1)
			v[i] = -1;
		else
			v[i] = max(max(x, y), z) + 1;
	}
 
	cout<<v[n]<<endl;
 
  return 0;
}
 

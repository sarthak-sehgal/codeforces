#include<bits/stdc++.h>
 
typedef long long int bigInt;
 
using namespace std;
 
int main () {
	int n, x, MAX = 100001;
	vector<bigInt> v(MAX, 0);
	vector<bigInt> dp(MAX, 0);
 
	cin>>n;
 
	while (n) {
		cin>>x;
		v[x]++;
		n--;
	}
 
	dp[0] = 0;
	dp[1] = v[1];
 
	for (bigInt i=2; i<MAX; i++) {
		dp[i] = max(dp[i-1], dp[i-2] + v[i]*i);
	}
 
	cout<<dp[MAX-1]<<endl;
 
  return 0;
}

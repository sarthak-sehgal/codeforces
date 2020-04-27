#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulld;

ulld maxUlld = 18446744073709551615;

ulld calc (vector<ulld>& v1, vector<ulld>& v2, vector<ulld>& v3, int idx1, int idx2, int idx3) {
	if (idx1 >= v1.size() || idx2>=v2.size() || idx3>=v3.size())
		return maxUlld;

	return (v1[idx1]-v2[idx2])*(v1[idx1]-v2[idx2]) + (v2[idx2]-v3[idx3])*(v2[idx2]-v3[idx3]) + (v3[idx3]-v1[idx1])*(v3[idx3]-v1[idx1]);
}

int main() {
	int t, n1, n2, n3;
	ulld x;
	cin>>t;

	while (t--) {
		cin>>n1>>n2>>n3;

		vector<ulld> v1, v2, v3;
		for (int i=0; i<n1; i++) {
			cin>>x;
			v1.push_back(x);
		}
		for (int i=0; i<n2; i++) {
			cin>>x;
			v2.push_back(x);
		}
		for (int i=0; i<n3; i++) {
			cin>>x;
			v3.push_back(x);
		}

		int ptr1=0, ptr2=0, ptr3=0;
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		sort(v3.begin(), v3.end());
		unique(v1.begin(), v1.end());
		unique(v2.begin(), v2.end());
		unique(v3.begin(), v3.end());

		ulld res = calc(v1, v2, v3, ptr1, ptr2, ptr3);
		while (ptr1<=v1.size()-1 || ptr2<=v1.size()-1 || ptr3<=v1.size()-1) {
			ulld t1 = calc(v1, v2, v3, ptr1+1, ptr2, ptr3);
			ulld t2 = calc(v1, v2, v3, ptr1, ptr2+1, ptr3);
			ulld t3 = calc(v1, v2, v3, ptr1, ptr2, ptr3+1);
			ulld minNum = min(t1, min(t2, t3));

			if (minNum == maxUlld)
				break;

			if (minNum == t1)
				ptr1++;
			else if (minNum == t2)
				ptr2++;
			else
				ptr3++;

			res = min(res, minNum);
		}
		cout<<res<<endl;
	}

	return 0;
}
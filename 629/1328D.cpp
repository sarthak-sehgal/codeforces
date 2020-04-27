#include <bits/stdc++.h>
using namespace std;

#define IOS                \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define ll long long
#define pii pair<int, int>
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b, c) for (int i = a; i < b; i += c)
#define tc(t) \
	int t;      \
	cin >> t;   \
	while (t--)
#define sz(v) int((v).size())
#define pb push_back

int32_t main()
{
	IOS;
	int n;
	tc(t)
	{
		cin >> n;
		vector<int> v(n);
		bool allEqual = true, adjEqual = false;
		loop(i, n)
		{
			cin >> v[i];
			if (i > 0)
			{
				if (v[i] != v[i - 1])
					allEqual = false;
				else
					adjEqual = true;
			}
		}
		if (v[0] == v[n - 1])
			adjEqual = true;

		if (allEqual)
		{
			cout << 1 << endl;
			loop(i, n) cout << "1 ";
			cout << endl;
		}
		else if (n % 2 == 0)
		{
			cout << 2 << endl;
			loop(i, n) cout << i % 2 + 1 << " ";
			cout << endl;
		}
		else if (adjEqual)
		{
			cout << 2 << endl;
			bool notFoundEqual = true, isOne = true;
			int i;
			for (i = 0; i < n - 1; i++)
			{
				if (v[i] == v[i + 1] && notFoundEqual)
				{
					if (isOne)
						cout << "1 1 ";
					else
						cout << "2 2 ";
					i++;
					notFoundEqual = false;
				}
				else
				{
					if (isOne)
						cout << "1 ";
					else
						cout << "2 ";
				}
				isOne = !isOne;
			}
			if (notFoundEqual)
				cout << "1";
			else if (i == n - 1)
			{
				if (isOne)
					cout << "1";
				else
					cout << "2";
			}
			cout << endl;
		}
		else
		{
			cout << 3 << endl;
			loop(i, n - 1)
			{
				if (i & 1)
					cout << "2 ";
				else
					cout << "1 ";
			}
			cout << "3" << endl;
		}
	}

	return 0;
}
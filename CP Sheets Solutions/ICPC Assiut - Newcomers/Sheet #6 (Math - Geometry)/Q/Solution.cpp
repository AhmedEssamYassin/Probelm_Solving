#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif //! ONLINE_JUDGE
	int t = 1;
	ll N, L, R, M;
	// cin >> t;
	while (t--)
	{
		cin >> L >> R >> M;
		ll prod = 1;
		//(a * b * c * d * e...) % m = (a % m * b % m * c % m ...) % m
		for (int i = L; i <= R; i++)
		{
			prod *= (i % M);
			prod %= M;
		}
		cout << prod;
	}
	return 0;
}
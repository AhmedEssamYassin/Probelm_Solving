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
	int N;
	cin >> t;
	while (t--)
	{
		string S;
		cin >> S;
		if (S.find("010") != -1 || S.find("101") != -1)
			cout << "Good" << endl;
		else
			cout << "Bad" << endl;
	}
	return 0;
}
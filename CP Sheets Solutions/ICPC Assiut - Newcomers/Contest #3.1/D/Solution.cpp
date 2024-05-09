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
	int t = 1, N;
	// cin >> t;
	while (t--)
	{
		cin >> N;
		int *arr = new int[N];
		for (int i{}; i < N; i++)
			cin >> arr[i];
		sort(arr, arr + N);

		int cnt{};
		for (int i{}; i < N; i++)
		{
			int Val = arr[i] + 1;
			if (binary_search(arr, arr + N, Val))
				cnt++;
		}
		cout << cnt;
		delete[] arr;
	}
	return 0;
}
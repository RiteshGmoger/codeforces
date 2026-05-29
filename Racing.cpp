#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;

void work()
{
	int n{}; 
	cin >> n;

	vector<int> a(n);
	vector<pair<int,int>> p(n);

	for(auto& it : a) cin >> it;
	for(int i{}; i < n; ++i) cin >> p[i].first >> p[i].second;

	// lo[i], hi[i] = possible height range after i-th move
	vector<int> lo(n + 1), hi(n + 1);
	lo[0] = hi[0] = 0;

	for(int i = 1; i <= n; ++i)
	{
		lo[i] = lo[i - 1];
		hi[i] = hi[i - 1] + 1;

		if(a[i - 1] == 0)
		{
			hi[i] = hi[i - 1];
		}
		else if(a[i - 1] == 1)
		{
			lo[i] = lo[i - 1] + 1;
			hi[i] = hi[i - 1] + 1;
		}

		lo[i] = max(lo[i], p[i - 1].first);
		hi[i] = min(hi[i], p[i - 1].second);

		if(lo[i] > hi[i])
		{
			cout << -1 << '\n';
			return;
		}
	}

	vector<int> h(n + 1);
	h[n] = hi[n];

	for(int i = n - 1; i >= 0; --i)
	{
		if(a[i] == 0)
		{
			h[i] = h[i + 1];
		}
		else if(a[i] == 1)
		{
			h[i] = h[i + 1] - 1;
		}
		else
		{
			if(h[i + 1] >= lo[i] && h[i + 1] <= hi[i])
				h[i] = h[i + 1];
			else
				h[i] = h[i + 1] - 1;
		}

		if(h[i] < lo[i] || h[i] > hi[i] || h[i + 1] - h[i] < 0 || h[i + 1] - h[i] > 1)
		{
			cout << -1 << '\n';
			return;
		}
	}

	for(int i = 0; i < n; ++i)
		cout << h[i + 1] - h[i] << ' ';
	cout << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t{}; 
	cin >> t;
	while(t--) work();

	return 0;
}

#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<int> a(n+1),b(n+1);
	for(int i{1};i<=n;++i) std::cin>>a[i];
	for(int j{1};j<=n;++j) std::cin>>b[j];

	std::vector<int> prefmx(n+1),prefmn(n+1);
	std::vector<int> sufmx(n+1),sufmn(n+1);
	std::vector<int> gd(2*n+2,0);

	prefmx[1] = prefmn[1] = a[1];
	for(int i{2};i<=n;++i)
	{
		prefmx[i] = std::max(prefmx[i-1],a[i]);
		prefmn[i] = std::min(prefmn[i-1],a[i]);
	}

	sufmx[n] = sufmn[n] = b[n];
	for(int i{n-1};i>0;--i)
	{
		sufmx[i] = std::max(sufmx[i+1],b[i]);
		sufmn[i] = std::min(sufmn[i+1],b[i]);
	}

	for(int i{1};i<=n;++i)
	{
		int mx = std::max(prefmx[i],sufmx[i]);
		int mn = std::min(prefmn[i],sufmn[i]);
		gd[mx] = std::max(gd[mx],mn);
	}

	long long ans{};
	int cur{};
	for(int i{1};i<=2*n;++i)
	{
		cur = std::max(gd[i],cur);
		ans += cur;
	}

	std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--) work();

	return 0;
}

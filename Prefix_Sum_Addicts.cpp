#include<bits/stdc++.h>

void work()
{
	int n{},k{};
	std::cin>>n>>k;

	std::vector<int> pref(n+1),a(n+1);
	for(int i{n-k+1};i<=n;++i) std::cin>>pref[i];

	if(k == 1)
	{
		std::cout<<"YES\n";
		return;
	}

	for(int i{n-k+2};i<=n;++i) a[i] = pref[i] - pref[i-1];

	if(!std::is_sorted(a.begin()+n-k+2,a.begin()+n+1))
	{
		std::cout<<"NO\n";
		return;
	}
	if(pref[n-k+1] > a[n-k+2] * 1LL * (n-k+1))
	{
		std::cout<<"NO\n";
		return;
	}

	std::cout<<"YES\n";
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

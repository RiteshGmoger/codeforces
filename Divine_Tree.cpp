#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

inline static ll L(ll n,ll r)
{
	return r*(r+1)/2 + (n-r);
}

void work()
{
	ll n{},m{}; std::cin>>n>>m;

	if(m < n || m > n*(n+1)/2)
	{
		std::cout<<-1<<'\n';
		return;
	}

	ll r{1};
	for(ll i{1};i<=m;++i)
	{
		if(L(n,i) <= m) r = i;
		else break;
	}
	std::cout<<r<<'\n';

	for(ll i{r};i>=2;--i)
		std::cout<<i<<' '<<i-1<<'\n';

	ll base = L(n,r);
	ll delta = m - base;
	ll curr = r+1;

	if(r == 1)
    	{
        	while(curr <= n)
        	{
			std::cout << curr << " 1\n";
	        	curr++;
        	}
        	return;
    	}
	ll cap = r-1;
	ll rem = delta%cap;
	ll tmp = delta/cap;

	for(ll i{};i<tmp;i++)
	{
		std::cout<<curr<<' '<<r<<'\n';
		curr++;
	}

	if(rem)
	{
		std::cout<<curr<<' '<<rem+1<<'\n';
		curr++;
	}

	while(curr <= n)
	{
		std::cout<<curr<<' '<<"1\n";
		curr++;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}

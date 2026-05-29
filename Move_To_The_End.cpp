#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	ll n{}; std::cin>>n;
	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	std::vector<ll> mx(n);
	std::vector<ll> suf(n+1);

	mx[0] = a[0];
	suf[n-1] = a[n-1];

	for(ll i{1};i<n;++i) mx[i] = std::max(a[i],mx[i-1]);
	for(ll i{n-2};i>=1;--i) suf[i] = suf[i+1] + a[i];

	for(ll i{n-1};i>=0;--i) std::cout<<mx[i] + suf[i+1]<<' ';

	std::cout<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}

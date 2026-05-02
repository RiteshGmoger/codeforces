#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	int n{}; std::cin>>n;
	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	std::vector<ll> even{},three{},six{},left{};

	for(int i{};i<n;++i)
	{
		if(a[i]%6 == 0) six.push_back(a[i]);
		else if(a[i]%2 == 0) even.push_back(a[i]);
		else if(a[i]%3 == 0) three.push_back(a[i]);
		else left.push_back(a[i]);
	}

	for(auto& it : even) std::cout<<it<<' ';
	for(auto& it : left) std::cout<<it<<' ';
	for(auto& it : three) std::cout<<it<<' ';
	for(auto& it : six) std::cout<<it<<' ';

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

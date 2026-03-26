#include<bits/stdc++.h>

void work()
{
	int n{},x{};
	std::cin>>n>>x;

	std::vector<int> a(n),b;
	for(auto& it : a) std::cin>>it;

	if(x <= n/2)
	{
		std::cout<<"YES"<<'\n';
		return;
	}

	bool ok{true};
	b = a;
	std::sort(b.begin(),b.end());

	for(int i{n-x};i<x;++i)
		if(a[i] != b[i]) ok = false;

	if(!ok) std::cout<<"NO\n";
	else std::cout<<"YES\n";
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

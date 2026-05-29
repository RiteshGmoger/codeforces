#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;

	for(int i{};i<n;++i) std::cout<<(2*n - i)<<' ';
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

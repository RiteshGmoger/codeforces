#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;
	int zero{},one{},two{};
	for(int i{};i<n;++i)
	{
		int tmp{};
		std::cin>>tmp;

		if(tmp == 0) zero++;
		else if(tmp == 1) one++;
		else two++;
	}

	int tmp = std::min(one,two);
	std::cout<<zero + tmp + (one - tmp) / 3 + (two - tmp) / 3<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}

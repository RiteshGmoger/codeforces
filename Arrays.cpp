#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<long long> a(n);
	for(long long& x : a) std::cin>>x;

	for(int i{};i<n;++i)
	{
		int smaller{},larger{};
		for(int j{i+1};j<n;++j)
		{
			if(a[j] > a[i]) larger++;
			else if(a[j] < a[i]) smaller++;
		}

		std::cout<<std::max(smaller,larger)<<' ';
	}
	std::cout<<'\n';
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

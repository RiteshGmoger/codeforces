#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	std::vector<int> a(n+2);
	a[0] = 0;
	for(int i{1};i<=n;++i) std::cin>>a[i];
	a[n+1] = 1001;

	int mx{};
	for(int i{};i<=n;++i)
	{
		for(int j{i+1};j <= n+1;++j)
		{
			if(a[i] - i == a[j] - j) mx = std::max(mx, j - i - 1);
		}
	}

	std::cout<<mx<<'\n';

	return 0;
}

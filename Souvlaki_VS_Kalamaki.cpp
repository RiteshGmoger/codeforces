#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<int> a(n);
	for(int& it : a) std::cin>>it;

	std::sort(a.begin(),a.end());

	for(int i{};i<n-1;++i)
	{
		if(i%2 == 1 && a[i] != a[i+1])
		{
			std::cout<<"NO\n";
			return;
		}
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

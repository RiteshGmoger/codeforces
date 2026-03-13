#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},count{};
		std::cin>>n;

		std::vector<int> a(n);
		for(int i{};i<n;++i)
			std::cin>>a[i];

		stable_sort(a.begin(),a.end(),[](int x,int y){ return (x%2) < (y%2); });

		for(int i{};i<n;++i)
			for(int j{i+1};j<n;++j)
				if(std::gcd(a[i],2*a[j])>1) count++;

		std::cout<<count<<'\n';
	}

	return 0;
}

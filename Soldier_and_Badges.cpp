#include<bits/stdc++.h>

int main()
{
	int n{}; std::cin>>n;
	int sum{};
	
	std::vector<int> a(n);
	for(int i{};i<n;++i) std::cin>>a[i];

	std::sort(a.begin(),a.end());

	for(int i{1};i<n;++i)
	{
		if(a[i] <= a[i-1])
		{
			sum += (a[i-1]+1 - a[i]);
			a[i] = a[i-1]+1;
		}
	}

	std::cout<<sum<<'\n';

	return 0;
}

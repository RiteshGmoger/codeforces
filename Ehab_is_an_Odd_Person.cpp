#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	bool even{false},odd{false};
	for(int i{};i<n;++i)
	{
		if(a[i]%2 == 0) even = true;
		else odd = true;

		if(even && odd) break;
	}

	if(even && odd) std::sort(a.begin(),a.end());

	for(auto& it : a) std::cout<<it<<' ';
	std::cout<<'\n';

	return 0;
}

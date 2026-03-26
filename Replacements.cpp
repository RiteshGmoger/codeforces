#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	std::sort(a.begin(),a.end());

	if(a.back() == 1) a.back() = 2;
	else a.back() = 1;

	std::sort(a.begin(),a.end());

	for(int i{};i<n;++i) std::cout<<a[i]<<' ';
	std::cout<<'\n';

	return 0;
}

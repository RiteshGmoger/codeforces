#include<bits/stdc++.h>

int main()
{
	int n{},t{};
	std::cin>>n>>t;

	std::vector<int> ans(n);
	for(int i{1};i<n;++i) std::cin>>ans[i];

	int current{1};

	while(current < t) current += ans[current];

	if(current == t) std::cout<<"YES\n";
	else std::cout<<"NO\n";

	return 0;
}

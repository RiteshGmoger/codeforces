#include<bits/stdc++.h>

int main()
{
	int n{},m{};
	std::cin>>n>>m;

	std::vector<int> a(n),b(m);
	for(auto& it : a) std::cin>>it;
	for(auto& it : b) std::cin>>it;

	int i{n-1},j{m-1},ans{};
	while(i >= 0)
	{
		if(j >= 0 && b[j] >= a[i])
		{
			i--;
			j--;
		}
		else
		{
			ans++;
			i--;
		}
	}

	std::cout<<ans<<'\n';

	return 0;
}

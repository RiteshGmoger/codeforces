#include<bits/stdc++.h>

int main()
{
	int n{},k{};
	std::cin>>n>>k;

	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	std::sort(a.begin(),a.end());

	int ans{};
	for(int i{};i<n;)
	{
		int j = i;
		while(j < n && a[i] == a[j]) j++;

		if(j == n || a[j] - a[i] > k) ans += (j-i);

		i = j;
	}

	std::cout<<ans<<'\n';

	return 0;
}

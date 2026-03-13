#include<bits/stdc++.h>

int main()
{
	int n{},k{};
	std::cin>>n>>k;

	std::vector<int> v(n,0);

	for(int i{};i<n;++i)
		std::cin>>v[i];

	int sum{},ans{};

	for(int i{};i<k;++i)
		sum += v[i];

	int j{},start{};
	ans = sum;

	for(int i{k};i<n;++i)
	{
		sum += v[i];
		sum -= v[j];
		j++;
		if(sum < ans)
		{
			ans = sum;
			start = j;
		}
	}

	std::cout<<start+1<<'\n';
}

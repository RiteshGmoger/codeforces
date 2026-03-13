#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	if(n <= 2)
	{
		std::cout<<n<<'\n';
		return 0;
	}

	std::vector<std::pair<int, int>> vp(n);

	for(int i{};i<n;++i)
		std::cin>>vp[i].first>>vp[i].second;

	int occupied = vp[0].first ,count{2};

	for(int i{1};i<n-1;++i)
	{

		if(vp[i].first - vp[i].second > occupied)
		{
			occupied = vp[i].first;
			count++;
		}
		else if(vp[i].second + vp[i].first < vp[i+1].first)
		{
			occupied = vp[i].second + vp[i].first;
			count++;
		}
		else occupied = vp[i].first;
	}

	std::cout<<count<<'\n';

	return 0;
}

#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	std::vector<int> vec(n+1);

	for(int i{1};i<=n;++i)
	{
		int temp{};
		std::cin>>temp;
		vec[temp] = i;
	}

	int m{};
	std::cin>>m;

	long long vasya{},petya{};

	while(m--)
	{
		int temp{};
		std::cin>>temp;

		vasya += vec[temp];
		petya += n-vec[temp]+1;
	}

	std::cout<<vasya<<' '<<petya<<'\n';

	return 0;
}

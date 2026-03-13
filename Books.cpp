#include<bits/stdc++.h>

int  main()
{
	long long n{},t{};
	std::cin>>n>>t;

	std::vector<int> v(n);

	for(int i{};i<n;++i) std::cin>>v[i];

	long long books{},j{},sum{};

	for(int i{};i<n;++i)
	{
		sum += v[i];

		while(sum > t)
		{
			sum -= v[j];
			j++;
		}

		books = std::max(books,i-j+1);
	}

	std::cout<<books<<'\n';

	return 0;
}

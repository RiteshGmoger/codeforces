#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;

	std::vector<int> t(n);
	for(auto& it : t) std::cin>>it;

	int sum1{},sum2{};
	int i{},j{n-1};
	int a{},b{};

	while(i <= j)
	{
		if(sum1 <= sum2)
		{
			sum1 += t[i];
			i++;
			a++;
		}
		else
		{
			sum2 += t[j];
			j--;
			b++;
		}
	}

	std::cout<<a<<' '<<b<<'\n';

	return 0;
}

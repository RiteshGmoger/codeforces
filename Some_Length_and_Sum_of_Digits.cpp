#include<bits/stdc++.h>

int main()
{
	int m{},s{};
	std::cin>>m>>s;

	if (s == 0)
	{
		if (m == 1)
        		std::cout << "0 0";
    		else
        		std::cout << "-1 -1";
    		return 0;
	}

	if (s > 9*m)
	{
		std::cout << "-1 -1";
    		return 0;
	}

	std::string largest{};
	int sum = s;

	for(int i{};i<m;++i)
	{
		int temp = std::min(9,sum);
		largest += static_cast<char>('0' + temp);
		sum -= temp;
	}

	std::vector<int> digits(m,0);
	digits[0] = 1;
	sum = s-1;

	for(int i{m-1};i >= 0 && sum > 0;--i)
	{
		int temp = std::min(9 - digits[i],sum);
		digits[i] += temp;
		sum -= temp;
	}

	std::string smallest{};

	for(int d : digits)
		smallest += static_cast<char>('0' + d);

	std::cout<<smallest<<' '<<largest<<'\n';

	return 0;
}

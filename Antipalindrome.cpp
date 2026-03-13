#include<bits/stdc++.h>

int main()
{
	std::string str{};
	std::cin>>str;
	int n = str.length();
	bool flag{true};

	for(int i{n-1};i>=0;--i)
	{
		int low{}, high{i};
		while(low<=high)
		{
			if(str[low]!=str[high])
			{
				flag=false;
				break;
			}
			else
			{
				low++;
				high--;
			}
		}
		if (!flag)
		{
			std::cout<< i+1 <<'\n';
			return 0;
		}
	}
	std::cout<< 0 <<'\n';

	return 0;
}

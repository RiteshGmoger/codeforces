#include<bits/stdc++.h>

int main()
{
	std::string p{};
	std::cin>>p;
	bool flag{false};

	for(char ch : p)
	{
		if(ch == 'H' || ch == 'Q' || ch == '9' )
		{
			flag = true;
			break;
		}
	}
	if(flag) std::cout<<"YES"<<'\n';
	else std::cout<<"NO"<<'\n';

	return 0;
}

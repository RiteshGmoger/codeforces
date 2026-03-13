#include<bits/stdc++.h>

int main()
{
	int t;
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	std::cin>>t;

	while(t--)
	{
		std::string s;
		std::cin>>s;
		
		int x = stoi(s);

		int r=static_cast<int>(std::sqrt(x));

		while(static_cast<long long>((r+1)*(r+1))<=x) ++r;
		while(static_cast<long long>(r*r)>x) --r;

		if(static_cast<long long>(r*r) != x)
			std::cout<< -1 <<'\n';
		else
			std::cout<< 0 << " "<<r<<'\n';
	}
	return 0;
}




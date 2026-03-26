#include<bits/stdc++.h>

int main()
{
	int h1{},a1{},c{},h2{},a2{};
	std::cin>>h1>>a1>>c>>h2>>a2;

	std::vector<std::string> v{};

	while(h2 > 0)
	{
		if(h1 - a2 > 0 || h2 - a1 <= 0)
		{
			v.push_back("STRIKE");
			h2 -= a1;
			h1 -= a2;
		}
		else 
		{
			v.push_back("HEAL");
			h1 += c;
			h1 -= a2;
		}
	}

	std::cout<<v.size()<<'\n';
	for(auto& it : v) std::cout<<it<<'\n';

	return 0;
}

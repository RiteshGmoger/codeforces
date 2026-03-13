#include<bits/stdc++.h>

int main()
{
	std::string a{},b{},c{};
	std::cin>>a>>b>>c;
	
	std::string temp = a+b;

	sort(temp.begin(),temp.end());
	sort(c.begin(),c.end());

	if(c==temp) std::cout<<"YES\n";
	else std::cout<<"NO\n";

	return 0;
}

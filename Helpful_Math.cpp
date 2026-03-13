#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main()
{
	std::string s{};

	std::cin>>s;

	int n=s.size(),i{};
	std::vector<int> vec{};

	for(i=0;i<n;++i) 
	{
		if(s[i]!='+') vec.push_back(s[i]-'0');
	}
	std::sort(vec.begin(),vec.end());
	int m=vec.size();
	
	for(i=0;i<m-1;++i)
	{
		std::cout<<vec[i]<<'+';
	}
	std::cout<<vec[i]<<'\n';

	return 0;
}

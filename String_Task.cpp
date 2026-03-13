#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str{},new_str{};
	std::cin>>str;
	int n=str.size();

	for(int i{};i<n;++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;

		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y') continue;
		new_str.push_back('.');
		new_str.push_back(str[i]);
	}

	std::cout<<new_str<<'\n';
	return 0;
}

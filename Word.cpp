#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s{};
	std::cin>>s;
	int upcase{},lwcase{};
	int n=s.size();

	for(char ch : s)
	{
		if(ch>='A' && ch<='Z') upcase++;
		else lwcase++;
		if(upcase>n/2 || lwcase>n/2) break;
	}

	if(upcase>lwcase)
	{
		for(char &ch : s)
		{
			if(ch>='a' && ch<='z') ch-='a'-'A';
		}
	}
	else
	{
		for(char &ch : s)
		{
			if(ch>='A' && ch<='Z') ch+='a'-'A';
		}
	}

	std::cout<<s<<'\n';
	return 0;
}

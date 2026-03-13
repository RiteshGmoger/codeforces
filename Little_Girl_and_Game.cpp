#include<bits/stdc++.h>

int main()
{
	std::string s{};
	std::cin>>s;

	std::vector<int> vec(26,0);

	for(char c : s)
		vec[c - 'a']++;

	int odd{};

	for(int i{};i<26;++i)
		if(vec[i]%2) odd++;

	if(odd == 0 || odd%2 == 1)
		std::cout<<"First\n";
	else
		std::cout<<"Second\n";

	return 0;
}

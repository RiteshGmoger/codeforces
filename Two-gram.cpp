#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;
	
	std::string s{};
	std::cin>>s;

	int freq[26][26] = {0};

	for(int i{};i<n-1;++i)
		freq[s[i] - 'A'][s[i+1] - 'A']++;

	int best{};
	std::string ans{};

	for(int i{};i<26;++i)
	{
		for(int j{};j<26;++j)
		{
			if(freq[i][j] > best)
			{
				best = freq[i][j];
				ans = std::string(1,char('A' + i)) + char('A' + j);
			}
		}
	}

	std::cout<<ans<<'\n';

	return 0;
}

#include<bits/stdc++.h>

void work()
{
	std::string s{};
	std::cin>>s;
	int n = s.size(),m{};

	std::vector<bool> freq(26,false);

	for(int i{};i<n;++i)
	{
		if(freq[s[i] - 'a'])
		{
			m += 2;

			for(int i{};i<26;++i) freq[i] = false;
		}
		else freq[s[i] - 'a'] = true;
	}

	std::cout<<n-m<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--) work();

	return 0;
}

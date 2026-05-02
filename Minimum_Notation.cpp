#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	std::string s{}; std::cin>>s;

	int n = s.size(),mn{9};
	std::vector<int> pref(n);
	std::vector<int> cnt(10,0);

	for(int i{n-1};i>=0;--i)
	{
		mn = std::min(mn,s[i]-'0');
		pref[i] = mn;
	}

	for(int i{};i<n;++i)
	{
		if(pref[i] >= s[i] - '0') cnt[s[i] - '0']++;
		else cnt[std::min(9,(s[i]-'0')+1)]++;
	}

	std::string ans{};
	for(int i{};i<=9;++i) ans.append(cnt[i],char('0'+i));

	std::cout<<ans<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}

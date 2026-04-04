#include<bits/stdc++.h>

inline long long apply(long long x, char c, const std::unordered_set<long long>& black)
{
	if(c == 'A') return x+1;

	x++;
	while(black.find(x) != black.end()) ++x;
	return x;
}

void work()
{
	int n{},m{};
	std::cin>>n>>m;

	std::string s{};
	std::cin>>s;

	std::vector<long long> a{};
	std::unordered_set<long long> black{};
	a.reserve(n + m + 5);
	black.reserve((n + m) * 2 + 10);
	black.max_load_factor(0.7f);

	for(int i{};i<m;++i)
	{
		long long x{};
		std::cin>>x;
		a.push_back(x);
		black.insert(x);
	}

	long long cur{1};
	for(int i{};i<n;++i)
	{
		long long ans = apply(cur, s[i], black);
		black.insert(ans);
		a.push_back(ans);

		cur = apply(cur, s[i], black);
	}

	std::sort(a.begin(),a.end());
	a.erase(std::unique(a.begin(),a.end()),a.end());

	std::cout<<a.size()<<'\n';
	for(auto& it : a) std::cout<<it<<' ';
	std::cout<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}

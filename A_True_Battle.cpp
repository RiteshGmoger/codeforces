#pragma GCC optimize("O3")
#include<bits/stdc++.h>

void work()
{
	int n{}; std::cin>>n;

	std::string s{};
	std::cin>>s;

	bool ok{};
	if(s[0] == '1' || s[n-1] == '1') ok = true;
	if(s.find("11") != std::string::npos) ok = true;

	std::cout<<(ok ? "YES\n" : "NO\n");
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}

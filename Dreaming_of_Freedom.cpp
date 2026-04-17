#include<bits/stdc++.h>

void work()
{
	long long n{},m{};
	std::cin>>n>>m;

	bool ok{true};
	for(int  i{2};i*i <= n;++i)
	{
		if(n%i == 0)
		{
			if(i <= m) ok = false;
			break;
		}
	}

	if(n <= m && n > 1) ok = false;

	std::cout<<(ok ? "YES\n" : "NO\n");
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

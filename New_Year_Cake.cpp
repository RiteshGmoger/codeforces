#pragma GCC optimize("O3")
#include<bits/stdc++.h>

int solve(long long a,long long b,bool ok)
{
	int need{1};
	int ans{};

	while(true)
	{
		if(ok)
		{
			if(a < need) break;
			a -= need;
		}
		else
		{
			if(b < need) break;
			b -= need;
		}

		need *= 2;
		ans++;

		ok = !ok;
	}

	return ans;
}

void work()
{
	long long a{},b{};
	std::cin>>a>>b;
	
	std::cout<<(std::max(solve(a,b,true),solve(a,b,false)))<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}

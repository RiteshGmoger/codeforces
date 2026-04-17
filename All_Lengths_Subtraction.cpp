#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<int> p(n);
	int mx{};
	for(int i{};i<n;++i)
	{
		std::cin>>p[i];
		if(p[i] == n) mx = i;
	}

	bool ok{true};
	for(int i{1};i<mx;++i)
	{
		if(p[i-1] > p[i])
		{
			ok = false;
			break;
		}
	}
	if(!ok)
	{
		std::cout<<"NO\n";
		return;
	}

	for(int i{mx+1};i<n-1;++i)
	{
		if(p[i] < p[i+1])
		{
			ok = false;
			break;
		}
	}

	if(ok) std::cout<<"YES\n";
	else std::cout<<"NO\n";
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

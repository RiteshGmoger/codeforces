#include<bits/stdc++.h>

void work()
{
	int n{},m{};
	std::cin>>n>>m;
	
	std::vector<std::vector<int>> a(n+1,std::vector<int>(m+1,0));
	std::vector<int> r(n),c(m);
	int mx{},cnt{};

	for(int i{};i<n;++i)
	{
		for(int j{};j<m;++j)
		{
			std::cin>>a[i][j];
			if(a[i][j] > mx) mx = a[i][j] , cnt = 1;
			else if(mx == a[i][j]) cnt++;
		}
	}

	for(int i{};i<n;++i)
		for(int j{};j<m;++j)
			if(a[i][j] == mx) r[i]++ , c[j]++;

	int flag{};
	for(int i{};i<n;++i)
	{
		for(int j{};j<m;++j) 
		{
			if(r[i] + c[j] - (a[i][j] == mx) == cnt)
			{
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}

	std::cout<<mx - flag<<'\n';
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

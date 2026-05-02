#pragma GCC optimize("O3")
#include<bits/stdc++.h>

int n{};

int solve(int l,int r,std::vector<int>& a)
{
	std::set<int> s{};
	for(int i{};i<=n;++i) s.insert(i);

	while(l>=0 && r<2*n && a[l] == a[r])
	{
		s.erase(a[l]);
		l--;
		r++;
	}

	return *s.begin();
}

void work()
{
	std::cin>>n;
	std::vector<int> a(2*n);
	for(auto& it : a) std::cin>>it;

	int x{-1},y{};
	for(int i{};i<2*n;++i)
	{
		if(!a[i])
		{
			if(~x) y = i;
			else x = i;
		}
	}

	std::cout<<(std::max({solve(x,x,a),solve(y,y,a),solve((x+y)/2,(x+y+1)/2,a)}))<<'\n';
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;
	while(t--) work();

	return 0;
}

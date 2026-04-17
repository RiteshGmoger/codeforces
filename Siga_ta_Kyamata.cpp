#include<bits/stdc++.h>

void work()
{
	int n{};
	std::cin>>n;

	std::vector<int> p(n);
	int pos1{},posn{};
	for(int i{};i<n;++i)
	{
		std::cin>>p[i];
		if(p[i] == 1) pos1 = i;
		if(p[i] == n) posn = i;
	}

	std::string x{};
	std::cin>>x;

	if(x[0] == '1' || x[n-1] == '1' || x[pos1] == '1' || x[posn] == '1')
	{
		std::cout<<-1<<'\n';
		return;
	}

	std::cout<<5<<'\n'<<1<<' '<<pos1+1<<'\n'<<1<<' '<<posn+1<<'\n';
	std::cout<<pos1+1<<' '<<n<<'\n'<<posn+1<<' '<<n<<'\n';
	std::cout<<std::min(pos1,posn)+1<<' '<<std::max(pos1,posn)+1<<'\n';
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

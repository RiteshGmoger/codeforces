#include<bits/stdc++.h>

void work()
{
	int n{},m{};
	std::cin>>n>>m;

	std::vector<int> a(m);
	for(auto& it : a) std::cin>>it;

	bool ok = true;
	for(int i = 1; i < m; i++)
	{
	        if(a[i] <= a[i-1])
		{
		        ok = false;
        		break;
    		}
	}

	if(!ok) std::cout<<1<<'\n';
	else std::cout<<n - a[m-1] + 1<<'\n';
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

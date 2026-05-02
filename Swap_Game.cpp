#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long;

void work()
{
	int n{}; std::cin>>n;
	std::vector<ll> a(n);
	for(auto& it : a) std::cin>>it;

	ll mn = *min_element(a.begin()+1,a.end());

	if(a[0] > mn) std::cout<<"Alice\n";
	else std::cout<<"Bob\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{}; std::cin>>t;

	while(t--) work();

	return 0;
}

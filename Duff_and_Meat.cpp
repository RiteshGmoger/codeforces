#include<bits/stdc++.h>

int main()
{
	int n{};
	std::cin>>n;
	std::vector<int> a(n,0),p(n,0);

	for(int i{};i<n;++i)
		std::cin>>a[i]>>p[i];

	int i{},j{},ans{};

	while(i<n)
	{
		if(p[i]<p[j])
			j=i;
		ans+=a[i]*p[j];
		i++;
	}

	std::cout<<ans<<'\n';

	return 0;
}

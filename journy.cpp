#include<iostream>

int main()
{
	int t;
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin>>t;
	while(t--)
	{
		long long k,a,b,c;
		std::cin>>k>>a>>b>>c;

		long long s = a+b+c;
		long long full = k/s;
		long long days = full * 3;
		long long rem = k - full *s;
		
		if(rem == 0)
			std::cout<<days<<'\n';
		else if(rem<=a)
			std::cout<<days+1<<'\n';
		else if(rem<=b+a)
			std::cout<<days+2<<'\n';
		else
			std::cout<<days+3<<'\n';
	}
	return 0;
}

	

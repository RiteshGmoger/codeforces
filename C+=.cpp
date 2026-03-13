#include<iostream>

int main()
{
	int t;
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cin>>t;
	while(t--)
	{
		int a{},b{},n{},count{};
		std::cin>>a>>b>>n;
		count=0;

		if(a>b)
		{
			while(a<=n)
			{
				int temp=a;
				a+=b;
				count++;
				b=temp;
			}
			std::cout<<count<<'\n';
		}
		else
		{
			while(b<=n)
			{
				int temp=b;
				b+=a;
				count++;
				a=temp;
			}
			std::cout<<count<<'\n';
		}
	}
	return 0;
}

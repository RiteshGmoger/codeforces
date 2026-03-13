#include<iostream>

int main()
{
	int vec[5];
	vec[0]=100;
	vec[1]=20;
	vec[2]=10;
	vec[3]=5;
	vec[4]=1;
	
	long long n{},i{},count{};
	std::cin>>n;
	while(n!=0)
	{
		if(vec[i]>n) i++;
		else
		{
			n-=vec[i];
			count++;
		}
	}

	std::cout<<count<<'\n';

	return 0;
}

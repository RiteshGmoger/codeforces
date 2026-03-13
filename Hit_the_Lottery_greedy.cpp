#include<iostream>

int main()
{
	int arr[5]={100,20,10,5,1};
	long long n{},ans{};
	std::cin>>n;

	for(int i{};i<5;++i)
	{
		ans+=n/arr[i];
		n%=arr[i];
	}
	std::cout<<ans<<'\n';
	return 0;
}

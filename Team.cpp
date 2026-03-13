#include<iostream>

int main()
{
	int n{},ans{};
	std::cin>>n;
	int arr[n][3]={0};
	

	for(int i{};i<n;++i)
	{
		for(int j{};j<3;++j)
		{
			std::cin>>arr[i][j];
		}
	}

	for(int i{};i<n;++i)
	{
		int count{};
		for(int j{};j<3;++j)
		{
			if(arr[i][j]==1) count++;
		}
		if(count>1) ans++;
	}

	std::cout<<ans<<'\n';
	return 0;
}

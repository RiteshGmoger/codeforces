#include<iostream>

int main()
{
	int n{},h{},count{};
	std::cin>>n>>h;

	int arr[n];
	for(int i{};i<n;++i)
	{
		std::cin>>arr[i];
		
		if(arr[i]>h) count+=2;
		else count++;
	}
	std::cout<<count<<'\n';
	return 0;
}

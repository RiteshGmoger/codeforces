#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int count{},n{},sum{},temp{};
	std::cin>>n;
	std::vector<int> vec{};

	for(int i{};i<n;++i)
	{
		std::cin>>temp;
		vec.push_back(temp);
		sum+=temp;
	}
	std::sort(vec.rbegin(),vec.rend());
	
	temp=0;
	for(int i{};i<n;++i)
	{
		temp+=vec[i];
		count++;
		if(temp>(sum/2))
			break;
	}
	std::cout<<count<<'\n';

	return 0;
}


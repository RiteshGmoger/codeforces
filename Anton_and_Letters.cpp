#include<iostream>
#include<string>
#include<vector>

int main()
{
	std::string str{};
	std::vector<bool> arr(150,false);
	std::getline(std::cin>>std::ws,str);
	int n=str.size(),count{};

	for(int i{};i<n;i++)
	{
		if(str[i]=='{' || str[i]=='}'|| str[i]==',' || str[i]==' ') continue;

		arr[str[i]]=true;
	}

	for(int i{'a'};i<='z';++i)
	{
		if(arr[i]==true) count++;
	}
	
	std::cout<<count<<'\n';

	return 0;
}

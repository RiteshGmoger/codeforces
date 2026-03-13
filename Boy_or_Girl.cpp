#include<iostream>
#include<string>
#include<set>

int main()
{
	std::string str{};
	std::cin>>str;
	
	std::set<char> st{};

	for(char c : str)
	{
		st.insert(c);
	}

	int n=st.size();

	std::cout<<((n%2==0)?"CHAT WITH HER!":"IGNORE HIM!")<<'\n';

	return 0;
}

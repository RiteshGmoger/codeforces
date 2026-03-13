#include<bits/stdc++.h>

int main()
{
	std::string y{};
	std::cin>>y;
	int num = stoi(y);
	num++;
	y = std::to_string(num);

	while(1)
	{
		if(y[0] != y[1] && y[0] != y[2] && y[0] != y[3] 
				&& y[1] != y[2] && y[1] != y[3] 
				&& y[2] != y[3])
		{
			std::cout<<y<<'\n';
			break;
		}
		num = stoi(y);
		num++;
		y = std::to_string(num);
	}
	return 0;
}

#include<bits/stdc++.h>

int main()
{
	int n{}; std::cin>>n;

	std::vector<int> a(n);
	for(auto& it : a) std::cin>>it;

	std::vector<int> months = {31,28,31,30,31,30,31,31,30,31,30,31};

	for(int i{};i<12;++i)
	{
		bool ok{true};
		int feb{};

		for(int j{};j<n;++j)
		{
			int cur = months[(i+j)%12];

			if(cur == 28 && a[j] == 29)
			{
				feb++;
				cur = 29;
			}
			if(cur != a[j])
			{
				ok = false;
				break;
			}
		}

		if(ok && feb <= 1)
		{
			std::cout<<"YES\n";
			return 0;
		}
	}

	std::cout<<"NO\n";
	return 0;
}

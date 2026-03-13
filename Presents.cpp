#include<iostream>
#include<vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> p(n+1), ans(n+1);

	for(int i = 1; i <= n; i++) {
		std::cin >> p[i];
    		ans[p[i]] = i;  
	}

	for(int i = 1; i <= n; i++) {
		std::cout << ans[i] << " ";
	}
	
	std::cout<<'\n';

	return 0;

}


#include<bits/stdc++.h>

int main()
{
	int n{}, m{}, ans{1001};
	std::cin >> n >> m;

    	if (n > m) return 0;

	std::vector<int> vec(m);
    	for (int i = 0; i < m; ++i)
        	std::cin >> vec[i];

    	sort(vec.begin(), vec.end());

    	for (int i = 0; i + n - 1 < m; ++i)
    	{
        	ans = std::min(ans,vec[i+n-1]-vec[i]);
    	}

	std::cout << ans << '\n';
    	return 0;
}


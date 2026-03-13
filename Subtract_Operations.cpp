#include<bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin>>t;

	while(t--)
	{
		int n{},k{};
		std::cin>>n>>k;

		std::vector<int> v(n);
		for(int i{};i<n;++i) std::cin>>v[i];

		std::sort(v.begin(),v.end());

		int left{},right{1};
		bool ok{};

		while(right < n)
		{
			long long diff = v[right] - v[left];

			if(diff == k) { ok = true; break;}
			else if(diff < k) right++;
			else left++;

			if(left == right) right++;
		}

		std::cout<<(ok ? "YES\n" : "NO\n");;
	}

	return 0;
}

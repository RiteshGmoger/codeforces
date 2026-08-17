#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using i128  = __int128;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;

#define all(x)   (x).begin(),(x).end()
#define rall(x)  (x).rbegin(),(x).rend()
#define pb       push_back
#define eb       emplace_back
#define ff       first
#define ss       second


void solve()
{
	int n{}; cin>>n;
	vector<pair<int,int>> pc(n);
	for(auto& [f,s] : pc) cin>>f>>s;

	for(int i = 0; i < n; ++i)
    	{
        	if(pc[i].first < pc[i].second)
        	{
            		cout<<"NO\n";
            		return;
        	}

        	if(i > 0)
        	{
            		int newPlays = pc[i].first - pc[i-1].first;
		        int newClears = pc[i].second - pc[i-1].second;

            		if(newPlays < 0 || newClears < 0 || newClears > newPlays)
            		{
                		cout<<"NO\n";
                		return;
            		}
        	}
    	}		

	cout<<"Yes\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t{1};
	cin >> t;
	while(t--) solve();

	return 0;
}

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

int mex(vector<int>& a, int l, int r)
{
	vector<bool> seen(r - l + 3, false);

	for(int i = l; i <= r; ++i)
	{
        	if(a[i] < (int)seen.size())
            	seen[a[i]] = true;
    	}

    	for(int i = 0; ; ++i)
    	{
        	if(!seen[i])
            	return i;
    	}
}

void solve()
{
	int n{}; cin>>n;
	vi a(n); for(auto& it : a) cin>>it;

	if(mex(a,0,n-1) == 0)
	{
		cout<<1<<'\n';
		cout<<1<<' '<<n<<'\n';
		return;
	}

	
	for(int i{1}; i<n; ++i)
	{
		if(i == 1)
		{
			int tmp = mex(a,i,n-1);

			if(tmp > 0 && a[0] > 0)
			{
				cout<<2<<'\n';
				cout<<i+1<<' '<<n<<'\n';
				cout<<1<<' '<<2<<'\n';
				return;
			}
			continue;
		}
		if(i == n-1)
		{
			int tmp = mex(a,0,i-1);

			if(tmp > 0 && a[n-1] > 0)
			{
				cout<<2<<'\n';
				cout<<1<<' '<<i<<'\n';
				cout<<1<<' '<<2<<'\n';
				return;
			}

			continue;
		}
		int tmp1 = mex(a,0,i-1);
		int tmp2 = mex(a,i,n-1);

		if(tmp1 > 0 && tmp2 > 0)
		{
			cout<<3<<'\n';
			cout<<i+1<<' '<<n<<'\n';
			cout<<1<<' '<<i<<'\n';
			cout<<1<<' '<<2<<'\n';
			return;
		}
	}
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

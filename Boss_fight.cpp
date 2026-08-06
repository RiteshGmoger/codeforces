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


void solve() {
	int n;
    	cin>>n;

    	map<int,int> cnt;
    	ll sum = 0;

    	for(int i = 0; i < n; ++i)
	{
        	int x;
        	cin>>x;
        	cnt[x]++;
        	sum += x;
    	}

    	int mxVal{-1}, mxFreq{};
    	for (auto &[v, c] : cnt)
    	{
        	if(c > mxFreq)
		{
            	mxFreq = c;
            	mxVal = v;
        	}
    	}

    	int others = n - mxFreq;
    	int extra = mxFreq - (others + 2);

    	if(extra > 0) sum -= 1LL * extra * mxVal;

    	cout<<sum<<'\n';
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

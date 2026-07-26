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
    int n,k;cin>>n>>k;

    if (k == n - 1)
    {
        cout<<-1<<'\n';
        return;
    }

    int run = n - k;
    int zeroBlocks = (run + 1) / 2;
    int oneBlocks  = run / 2;
    int zeros = (n + 1) / 2;
    int ones  = n / 2;
    int extra0 = zeros - zeroBlocks;
    int extra1 = ones - oneBlocks;

    string s;
    for (int i{};i<run;i++)
    {
		if(i % 2 == 0)
		{
			int len = 1;
            		if(extra0 > 0)
			{
                		len += extra0;
                		extra0 = 0;
            		}
            		s += string(len, '0');
        	}
		else
		{
        		int len = 1;
            		if(extra1 > 0)
			{
                		len += extra1;
                		extra1 = 0;
            		}
        		s += string(len, '1');
		}
	}
	cout << s << '\n';
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

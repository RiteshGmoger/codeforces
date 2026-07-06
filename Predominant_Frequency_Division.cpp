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
	int n{}; 
        cin >> n;

       	vi a(n + 1);
        for(int i{1}; i<=n;i++) cin>>a[i];

        vi c1(n + 1),c2(n + 1),c3(n + 1),d(n + 1);

        for (int i = 1; i <= n; i++)
    	{
        	c1[i] = c1[i - 1] + (a[i] == 1);
	        c2[i] = c2[i - 1] + (a[i] == 2);
        	c3[i] = c3[i - 1] + (a[i] == 3);
	        d[i] = c1[i] + c2[i] - c3[i];
    	}

    	vi suf(n + 2, INT_MIN);
    	for(int i = n - 1; i >= 1; i--)
        	suf[i] = max(suf[i + 1], d[i]);

    	bool ok=false;

    	for(int i = 1; i <= n - 2; i++)
    	{
        	if(c1[i] >= c2[i]+c3[i])
        	{
            		if(suf[i + 1] >= d[i])
            		{
                		ok=true;
                		break;
            		}
        	}
    	}

    	cout<<(ok ? "YES\n" : "NO\n");
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

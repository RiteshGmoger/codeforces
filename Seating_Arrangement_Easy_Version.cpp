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
	int n, tables, seats;
    	cin>>n>>tables>>seats;

    	string people; cin>>people;

	vector<int> lo(tables+1,-1),hi(tables+1,-1);
	lo[0] = 0;
	hi[0] =0;

    	for(char type : people)
    	{
        	auto nxtLo = lo;
        	auto nxtHi = hi;

        	for(int opened = 0; opened <= tables; ++opened)
        	{
            		if(lo[opened] == -1) continue;

	            	int mn = lo[opened];
            		int mx = hi[opened];
            		int capacity = opened * seats;

            		if(type != 'I' && opened > 0 && mn < capacity)
            		{
                		int reach = min(mx+1, capacity);
                		nxtHi[opened] = max(nxtHi[opened], reach);
            		}

            		if(type != 'E' && opened < tables)
            		{
                		if(nxtLo[opened + 1] == -1)
                    			nxtLo[opened+1] = mn + 1;
                		else
                    			nxtLo[opened+1] = min(nxtLo[opened+1],mn+1);

                	nxtHi[opened+1] = max(nxtHi[opened+1],mx+1);
            		}
        	}

		lo.swap(nxtLo);
        	hi.swap(nxtHi);
    	}

    	int ans = 0;
    	for(int opened = 0; opened <= tables; ++opened)
        	ans = max(ans, hi[opened]);
	cout << ans << '\n';
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

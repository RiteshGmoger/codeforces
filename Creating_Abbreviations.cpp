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
	int n{},m{}; cin>>n>>m;
	vector<string> w(n),a(m);
	for(auto& it : w) cin>>it;
	for(auto& it : a) cin>>it;

	vector<int> cnt(26,-1);
	for(int i{};i<n;++i)
		cnt[w[i][0]-'a']++;
	
	vector<int> done(m,0);
    	int l{};

    	while(l < m)
    	{
        	bool chang{};

        	for(int i{};i<m;++i)
        	{
           		if(done[i]) continue;

		        bool ok = true;

            		for(auto& it : a[i])
            		{
                		if(cnt[it-'A'] == -1)
                		{
                    			ok = false;
                    			break;
                		}
            		}

            	if(ok)
            	{
                	done[i] = 1;
                	l++;
                	chang = true;
	                cnt[a[i][0]-'A'] = 0;
            	}
        }

	if(!chang)
        {
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
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

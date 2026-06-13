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
    long long n, x, y, z;
    cin >> n >> x >> y >> z;

    long long without = (n + (x + y) - 1) / (x + y);
    long long with;

    if (z * x >= n)
        with = (n + x - 1) / x;
    else
    {
        long long rem = n - z * x;
        with = z + (rem + (x + 10 * y) - 1) / (x + 10 * y);
    }

    cout << min(with, without) << '\n';
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

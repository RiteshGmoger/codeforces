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
    string s;
    cin >> s;

    int n = s.size();

    int p = 0;
    while(p < n && s[p] == '1') ++p;

    if(p == n)
    {
        cout <<1<<' '<<1<<' '<<1<<' '<<n<<'\n';
        return;
    }

    int len = n-p;

    pair<int,int> pr = {1, len};
    string best{};

    for(int i{};i+len <= n;i++)
    {
        string cur = s;

        for(int j = 0; j < len; j++)
        {
            cur[p + j] = ((s[p + j] - '0') ^ (s[i + j] - '0')) + '0';
        }

        if(cur > best)
        {
            best = cur;
            pr = {i + 1, i + len};
        }
    }

    cout << pr.ff << ' ' << pr.ss << ' ' << 1 << ' ' << n << '\n';
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

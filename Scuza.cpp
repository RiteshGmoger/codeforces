#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using i128 = __int128;

using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
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
    int n{}, q{};
    cin >> n >> q;

    vll a(n), v(n + 1);

    for(auto& x : a)
        cin >> x;

    for(int i = 1; i <= n; ++i)
        v[i] = v[i - 1] + a[i - 1];

    vector<pair<ll,int>> k(q);
    vector<ll> ans(q);

    for(int i = 0; i < q; ++i)
    {
        cin >> k[i].first;
        k[i].second = i;
    }

    sort(all(k));

    int j = 1;

    for(auto [x, idx] : k)
    {
        while(j <= n && a[j - 1] <= x)
            ++j;

        ans[idx] = v[j - 1];
    }

    for(auto x : ans)
        cout << x << ' ';

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t{};
    cin >> t;

    while(t--)
        solve();

    return 0;
}

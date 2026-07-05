#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> x(n);
    for(auto &i : x) cin >> i;

    map<ll,ll> mp;

    // actual given points xi
    for(ll i = 1; i <= n; i++)
    {
        ll segments = i * (n - i + 1) - 1;
        mp[segments]++;
    }

    // gaps between xi and x(i+1)
    for(ll i = 1; i < n; i++)
    {
        ll points = x[i] - x[i-1] - 1;

        ll segments = i * (n - i);

        mp[segments] += points;
    }

    while(q--)
    {
        ll k;
        cin >> k;

        cout << mp[k] << ' ';
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

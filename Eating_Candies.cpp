#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void work()
{
    ll n; cin >> n;
    vector<ll> w(n);
    for(ll &x : w) cin >> x;

    ll l = 0, r = n - 1;
    ll l_sum = w[0], r_sum = w[n - 1];
    ll ans = 0;

    while(l < r)
    {
        if(l_sum == r_sum)
            ans = max(ans, l + 1 + (n - r));

        if(l_sum <= r_sum)
        {
            l++;
            l_sum += w[l];
        }
        else
        {
            r--;
            r_sum += w[r];
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) work();
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    vector<pair<int,int>> extra;
    int ans = 0;

    // take all good ones first
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= b[i])
        {
            ans += a[i];
            k--;
        }
        else
        {
            extra.push_back({a[i] - b[i], i});
        }
    }

    // sort bad ones
    sort(extra.begin(), extra.end());

    // fill remaining k
    for(auto [diff, i] : extra)
    {
        if(k > 0)
        {
            ans += a[i];
            k--;
        }
        else
        {
            ans += b[i];
        }
    }

    cout << ans << '\n';
}

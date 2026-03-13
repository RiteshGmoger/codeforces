#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        ll h;
        cin >> n >> m >> h;

        vector<ll> v(n), original(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            original[i] = v[i];
        }

        vector<int> last_update(n, -1);
        int last_reset = -1;

        for (int i = 0; i < m; i++)
        {
            int idx;
            ll add;
            cin >> idx >> add;
            idx--;

            if (last_update[idx] < last_reset)
                v[idx] = original[idx];

            v[idx] += add;

            if (v[idx] > h)
            {
                last_reset = i;
                v[idx] = original[idx];
            }

            last_update[idx] = i;
        }

        for (int i = 0; i < n; i++)
        {
            if (last_update[i] < last_reset)
                v[i] = original[i];

            cout << v[i] << " ";
        }

        cout << "\n";
    }
}

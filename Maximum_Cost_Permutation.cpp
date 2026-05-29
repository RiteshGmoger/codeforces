#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

void work()
{
    int n;
    cin >> n;

    vector<int> p(n + 1);
    int zeroCnt = 0, zeroPos = -1;
    long long missing = 1LL * n * (n + 1) / 2;

    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i];
        if (p[i] == 0)
        {
            zeroCnt++;
            zeroPos = i;
        }
        else
        {
            missing -= p[i];
        }
    }

    int L = n + 1, R = 0;

    for (int i = 1; i <= n; ++i)
    {
        bool bad = (p[i] != i);

        if (zeroCnt == 1 && missing == zeroPos && i == zeroPos)
            bad = false;

        if (bad)
        {
            L = min(L, i);
            R = max(R, i);
        }
    }

    if (R == 0) cout << 0 << '\n';
    else cout << R - L + 1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) work();
}

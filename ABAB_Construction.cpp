#include<bits/stdc++.h>
using namespace std;

void work()
{
    int n;
    string x;
    cin >> n >> x;

    if(n % 2 == 1)
    {
        if(x[0] != '?' && x[0] != 'a')
        {
            cout << "NO\n";
            return;
        }

        for(int i = 1; i + 1 < n; i += 2)
        {
            if(x[i] != '?' && x[i+1] != '?' && x[i] == x[i+1])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    else
    {
        for(int i = 0; i + 1 < n; i += 2)
        {
            if(x[i] != '?' && x[i+1] != '?' && x[i] == x[i+1])
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) work();
}

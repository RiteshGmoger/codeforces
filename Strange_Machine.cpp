#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while(t--)
    {
        int n,q;
        cin >> n >> q;

        string s;
        cin >> s;

        bool allA = true;
        for(char c : s)
            if(c == 'B')
                allA = false;

        while(q--)
        {
            long long x;
            cin >> x;

            if(allA)
            {
                cout << x << "\n";
                continue;
            }

            int i = 0;
            long long count = 0;

            while(x > 0)
            {
                if(s[i] == 'A') x--;
                else x /= 2;

                count++;
                i = (i+1)%n;
            }

            cout << count << "\n";
        }
    }
}

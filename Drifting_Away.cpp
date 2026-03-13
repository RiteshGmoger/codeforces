#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        bool infinite = false;

        for(int i = 0; i < n - 1; i++)
        {
            if(s[i] != '<' && s[i+1] != '>')
            {
                infinite = true;
                break;
            }
        }

        if(infinite)
        {
            cout << -1 << "\n";
            continue;
        }

        int cntL = 0, cntR = 0;

        for(char c : s)
        {
            if(c == '<') cntL++;
            if(c == '>') cntR++;
        }

        cout << n - min(cntL, cntR) << "\n";
    }
}

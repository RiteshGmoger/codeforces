#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        string s, t;
        cin >> s >> t;

        int j = 0;

        for (int i = 0; i < (int)s.size(); i++)
        {
            if (j < (int)t.size())
            {
                if (s[i] == t[j])
                {
                    j++;
                }
                else if (s[i] == '?')
                {
                    s[i] = t[j];
                    j++;
                }
            }
        }

        if (j < (int)t.size())
        {
            cout << "NO\n";
            continue;
        }

        for (char &c : s)
        {
            if (c == '?')
            {
                c = 'a';
            }
        }

        cout << "YES\n";
        cout << s << "\n";
    }

    return 0;
}

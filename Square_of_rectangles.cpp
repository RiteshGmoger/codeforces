#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l1,b1,l2,b2,l3,b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    int area = l1*b1 + l2*b2 + l3*b3;
    int s = sqrt(area);

    if(s*s != area) {
        cout << "NO\n";
        return;
    }

    if(l1==s && l2==s && l3==s && b1+b2+b3==s)
        cout << "YES\n";

    else if(b1==s && b2==s && b3==s && l1+l2+l3==s)
        cout << "YES\n";

    else if(l1==s && b1+b2==s && b2==b3 && l2+l3==s)
        cout << "YES\n";

    else if(b1==s && l1+l2==s && l2==l3 && b2+b3==s)
        cout << "YES\n";

    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();
}

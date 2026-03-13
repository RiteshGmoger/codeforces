#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long a,b;
        cin >> a >> b;

        long long ans = -1;

        auto check = [&](long long k){
            if(b % k) return;
            long long s = a*k + b/k;
            if(s % 2 == 0) ans = max(ans, s);
        };

        check(1);
        check(b);
        if(b % 2 == 0) check(b/2);

        cout << ans << "\n";
    }
}

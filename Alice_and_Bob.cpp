#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n,a;
        cin >> n >> a;

        vector<long long> v(n);
        for(long long &x : v) cin >> x;

        long long left = lower_bound(v.begin(), v.end(), a) - v.begin();
        long long right = n - (upper_bound(v.begin(), v.end(), a) - v.begin());

        if (right > left) cout << a + 1 << "\n";
        else cout << a - 1 << "\n";
    }
}


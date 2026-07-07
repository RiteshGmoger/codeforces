#include<bits/stdc++.h>
 
using namespace std;
 
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())
 
typedef long long li;
 
template<class A> ostream& operator <<(ostream& out, const vector<A> &v) {
    fore(i, 0, sz(v)) {
        if(i) out << " ";
        out << v[i];
    }
    return out;
}
 
const int INF = int(1e9);
const li INF64 = li(1e18);
 
inline void solve() {
    int n; li k;
    cin >> n >> k;
    vector<int> q(n), r(n);
    fore (i, 0, n)
        cin >> q[i];
    fore (i, 0, n)
        cin >> r[i];
    
    sort(q.begin(), q.end());
    sort(r.begin(), r.end());
 
    auto check = [&](int cnt) {
        fore (i, 0, cnt) {
            if (li(q[i] + 1) * (r[cnt - 1 - i] + 1) - 1 > k)
                return false;
        }
        return true;
    };
 
    int lf = 0, rg = n + 1;
    while (rg - lf > 1) {
        int mid = (lf + rg) >> 1;
        if (check(mid))
            lf = mid;
        else
            rg = mid;
    }
    cout << lf << endl;
}
 
int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    int tt = clock();
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(15);
    
    int t = 1; cin >> t;
    while (t--) {
        solve();
        
#ifdef _DEBUG
        cerr << "TIME = " << clock() - tt << endl;
        tt = clock();
#endif
    }
    return 0;
}

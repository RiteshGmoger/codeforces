#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

long long modpow(long long a,long long b)
{
    long long res = 1;

    while(b)
    {
        if(b&1) res = res*a%MOD;
        a = a*a%MOD;
        b >>= 1;
    }

    return res;
}

void work()
{
    long long n,k;
    cin>>n>>k;

    vector<long long> v(n);

    long long sum = 0;

    for(auto &x:v)
    {
        cin>>x;
        sum = (sum + x) % MOD;
    }

    long long cur=v[0], best=v[0];

    for(int i=1;i<n;i++)
    {
        cur=max(v[i],cur+v[i]);
        best=max(best,cur);
    }

    if(best <= 0)
    {
        cout<<(sum+MOD)%MOD<<"\n";
        return;
    }

    long long p = modpow(2,k);

    long long extra = best%MOD * ((p-1+MOD)%MOD) % MOD;

    long long ans = (sum + extra) % MOD;

    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) work();
}

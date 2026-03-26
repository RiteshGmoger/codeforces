#include<bits/stdc++.h>
using ll = long long;

void work()
{
    int n;
    std::cin >> n;

    std::vector<ll> a(n);
    for(auto &x : a) std::cin >> x;

    std::stack<ll> st;

    for(int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && st.top() == a[i] + 1)
            st.pop();
        st.push(a[i]);
    }

    std::cout << st.size() << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) work();

    return 0;
}

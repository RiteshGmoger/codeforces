#include <bits/stdc++.h>
using namespace std;

const int N = 300005;
int T, n, ps[2];
char a[N];

void solve() {
  scanf("%d %s", &n, a + 1);
  ps[0] = ps[1] = 0;
  for (int i = 1; i < n; ++i) {
    ps[a[i] - 48] = i;
    if (a[i] == '0')
      printf("%d ", ps[1] + 1);
    else
      printf("%d ", ps[0] + 1);
  }
  putchar('\n');
}
int main() {
  scanf("%d", &T);
  while (T--) solve();
  return 0;
}

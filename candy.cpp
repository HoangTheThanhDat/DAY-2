#include <bits/stdc++.h>

using namespace std;

long long a , b , n;

int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        freopen("candy.inp" , "r" , stdin);
        freopen("candy.out" , "w" , stdout);

        cin >> a >> b >> n;

        long long cnt_candy_ate = n * 3;

        a -= cnt_candy_ate;
        b -= cnt_candy_ate;

        a = max(a , 0ll);
        b = max(b , 0ll);

        cout << abs(a - b);

        return 0;
}

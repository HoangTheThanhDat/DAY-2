#include <bits/stdc++.h>

using namespace std;

int a , b , ans = 0;

int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        freopen("score.inp" , "r" , stdin);
        freopen("score.out" , "w" , stdout);

        for (int i = 1 ; i <= 6 ; i++) {
                cin >> a >> b;

                if (a > b) ans += 3;
                if (a == b) ++ans;
        }

        cout << ans;

        return 0;
}
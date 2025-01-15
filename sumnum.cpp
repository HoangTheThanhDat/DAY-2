#include <bits/stdc++.h>

using namespace std;

string st;

int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        freopen("sumnum.inp" , "r" , stdin);
        freopen("sumnum.out" , "w" , stdout);

        cin >> st;

        st += '#';

        int ans = 0 , number = 0;

        for (char i : st) {
                if ('0' <= i && i <= '9') 
                        number = number * 10 + i - '0';
                else {
                        ans += number;
                        number = 0;
                }
        }

        cout << ans;

        return 0;
}
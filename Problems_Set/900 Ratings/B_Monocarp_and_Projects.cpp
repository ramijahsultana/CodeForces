#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll d = y - x;
        ll ans = 0;
        while (k > 0 && x <= d)
        {
            ans += d % x;
            x++;
            k--;
        }
        ans += k * d;
        cout << ans << '\n';
    }

    return 0;
}

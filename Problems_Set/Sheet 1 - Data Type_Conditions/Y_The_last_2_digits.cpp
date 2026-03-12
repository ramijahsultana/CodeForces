#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 1;
    ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;

    if (ans == 1 || ans == 2 || ans == 3 || ans == 4 || ans == 5 || ans == 6 || ans == 7 || ans == 8 || ans == 9 || ans == 0)
        cout << "0" << ans << "\n";
    else
        cout << ans << "\n";

    return 0;
}
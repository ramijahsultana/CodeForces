#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+1), b(n+1, 0);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << b[r] - b[l-1] << "\n";
    }

    return 0;
}
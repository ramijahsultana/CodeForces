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

    ll x = a + b - c;
    ll y = a + b * c;
    ll z = a - b * c;
    ll t = a - b + c;
    ll u = a * b + c;
    ll v = a * b - c;

    if (x == d || y == d || z == d || t == d || u == d || v == d)
        cout << "YES\n";
    else
        cout << "NO\n";    

        
        return 0;
}
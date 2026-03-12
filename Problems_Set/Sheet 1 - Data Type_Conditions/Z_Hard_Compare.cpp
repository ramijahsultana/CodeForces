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
    double ab = b * log(a);
    double cd = d * log(c);

    if (ab > cd)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
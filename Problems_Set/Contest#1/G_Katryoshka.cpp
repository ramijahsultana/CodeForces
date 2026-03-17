#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m,k;
    cin >> n >> m >> k;
    ll x = min({n,m,k});
     
    n -= x;
    k -= x;

    ll y = min(n/2, k);

    cout << x+y << "\n";

    return 0;
}
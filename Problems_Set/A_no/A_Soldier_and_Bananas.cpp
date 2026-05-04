#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, n, w;
    cin >> k >> n >> w;

    ll total = 0;
    for(int i=1; i<=w; i++)
    {
        total += i * k;
    }

    ll borrow = max(0LL, total - n);
    cout << borrow << "\n";

    return 0;
}
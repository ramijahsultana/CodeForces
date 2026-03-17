#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k,a;
    cin >> n >> k >> a;

    ll val = n*k;
    if(val%a != 0)
    {   
        cout << "double\n";
    }
    else
    {
        ll x = val/a;
        if(x <= 2147483647) cout << "int\n";
        else cout << "long long\n";
    }

    return 0;
}
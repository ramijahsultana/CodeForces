#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll mx = INT_MIN;
    for(ll i=0; i<n; i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
        }
    }

    cout << mx << "\n";

    return 0;
}
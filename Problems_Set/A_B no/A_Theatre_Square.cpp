#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m, a;
    cin >> n >> m >> a;
    ll x = (n+a-1)/a;
    ll y = (m+a-1)/a;
    cout << x * y << endl;

    return 0;
}
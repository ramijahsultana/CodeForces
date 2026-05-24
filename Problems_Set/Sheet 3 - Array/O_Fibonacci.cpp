#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll a = 0, b = 1, c;

    if (n == 1)
    {
        cout << 0 << '\n';
    }
    else if (n == 2)
    {
        cout << 1 << '\n';
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        cout << b << '\n';
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; i++)
            cin >> a[i];

        bool find = true;
        for (ll i = 2;; i++)
        {
            for (ll j = 1; i <= n; j++)
            {
                int x = __gcd(i, a[j]);
                if (x == 1)
                {
                    find = true;
                    break;
                }
            }

            if (!find)
                continue;
            cout << i << "\n";
            break;
           
        }
    }

    return 0;
}
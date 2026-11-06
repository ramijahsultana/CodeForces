#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, m;
        cin >> n >> k >> m;

        if (k > m)
        {
            cout << "NO\n";
            continue;
        }

        ll cnt = 0;
        cout << "YES\n";

        while (cnt < n)
        {
            for (ll i = 0; i < k - 1 && cnt < n; i++)
            {
                cout << 1 << " ";
                ++cnt;
            }
            if (cnt >= n)
                break;

           
            cout << (m - (k - 1)) << " ";
            ++cnt;
        }
        cout << "\n";
    }
    return 0;
}



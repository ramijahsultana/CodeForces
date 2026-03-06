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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        
        ll total = 0;
        for (int i = 0; i < n - 1; i++)
            total += abs(a[i] - a[i + 1]);

        ll ans = total;

       
        for (int k = 0; k < n; k++)
        {
            ll curr = total;

            if (k > 0)
                curr -= abs(a[k] - a[k - 1]);
            if (k < n - 1)
                curr -= abs(a[k] - a[k + 1]);
            if (k > 0 && k < n - 1)
                curr += abs(a[k - 1] - a[k + 1]);

            ans = min(ans, curr);
        }

        cout << ans << "\n";
    }
    return 0;
}

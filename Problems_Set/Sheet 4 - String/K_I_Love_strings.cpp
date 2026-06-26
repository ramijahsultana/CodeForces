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
        string s, t, v;
        cin >> s >> t;

        int mx = max(s.size(), t.size());
        for (int i = 0; i < mx; i++)
        {
            if (i < s.size())
                v.pb(s[i]);
            if (i < t.size())
                v.pb(t[i]);
        }

        cout << v << "\n";
    }

    return 0;
}
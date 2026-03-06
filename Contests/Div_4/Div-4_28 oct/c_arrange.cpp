#include <bits/stdc++.h>
using namespace std;
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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        bool even = false;
        bool odd = false;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even = true;
                continue;
            }
            if(a[i] % 2 == 1)
            {
                odd = true;
                continue;
            }
        }
        if (even && odd)
        {
            sort(a.begin(), a.end());
            for (int i = 1; i <= n; i++)
                cout << a[i] << " ";

            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
                cout << a[i] << " ";

            cout << endl;
        }
    }

    return 0;
}
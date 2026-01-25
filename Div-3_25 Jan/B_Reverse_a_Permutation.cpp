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
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            int val = n - i + 1;
            if (a[i] == val)
                continue;

            int pos = i;
            while (a[pos] != val)
                pos++;

            reverse(a.begin() + i, a.begin() + pos + 1);
            break;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
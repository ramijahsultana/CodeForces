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
        bool find = true;
        for (int i = 1; i <= n; i++)
        {
            if(a[i] != i && (a[i] != i*2 && a[i] != i/2))
            {
                find = false;
                break;
            }
        }
        if (find==true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int v = x % n;

    if (v == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        for (int i = n - v; i < n; i++)
            cout << a[i] << " ";

        for (int i = 0; i < n - v; i++)
            cout << a[i] << " ";
    }

    return 0;
}
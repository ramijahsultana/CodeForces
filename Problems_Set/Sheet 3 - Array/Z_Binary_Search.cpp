#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    while (t--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        bool find = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (x == a[mid])
            {
                cout << "found\n";
                find = true;
                break;
            }
            else if (x < a[mid])
            {

                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (!find)
            cout << "not found\n";
    }

    return 0;
}
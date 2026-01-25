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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1), b(n + 1), c(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            c[i] = a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            if (c[i] < b[i])
                c[i] = b[i];
        }
        int sum = 0;
        vector<int> res;
        while (q--)
        {
            int l, r;
            cin >> l >> r;

            for (int i = l; i <= r; i++)
            {
                sum += c[i];
               
            }
            res.pb(sum);
            sum = 0;
        }
        sort(res.rbegin(), res.rend());  
        for(auto x: res){
            cout<<x<<" ";
        }
        cout << "\n";
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for(int i = 1; i<=n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int big = *s.rbegin();
        ll val = big*n;
        cout << val << "\n";

    }

    return 0;
}
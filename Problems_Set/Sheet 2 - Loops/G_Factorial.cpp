#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll fact(int n)
{
    ll ans = 1;
    if(n==1)
    {
        return 1;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            ans *= i;
        }
    }

    return ans;
}

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
        ll val = fact(n);

        cout << val << "\n";

    }

    return 0;
}
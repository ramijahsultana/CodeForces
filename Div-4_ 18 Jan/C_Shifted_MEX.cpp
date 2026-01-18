#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int val(int x, vector<ll> a)
{
    int mex = 0;
    set<int> s;
    for(int i = 0; i<a.size(); i++)
    {
        if(x < 0)
        {
            a[i] += abs(x); 
        }
        else
        {
            a[i] -= x;
        }
        s.insert(a[i]);
    }

    while(s.find(mex) != s.end())
        mex++;

    return mex;    
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
        vector<ll> a(n);
        for(int i = 0; i<n; i++)
            cin >> a[i];

        ll l = 0;
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            int v = val(a[l] , a);
            l++;
            mx = max(mx , v);
        }

        cout << mx << "\n";
    }
    

    return 0;
}
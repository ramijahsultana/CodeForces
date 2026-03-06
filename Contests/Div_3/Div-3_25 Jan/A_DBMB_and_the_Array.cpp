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
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n);
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int val = abs(s-sum);
        if(sum<=s && val%x==0)
            cout << "YES\n";
        else
            cout << "NO\n";
            
    }

    return 0;
}
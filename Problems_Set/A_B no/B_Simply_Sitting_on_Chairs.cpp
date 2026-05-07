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
        vector<int> a(n + 1);
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;
        for(int i=1; i<=n; i++)
        {
            
           if(a[i] <= i)
           {
               cnt++;
           }
        }
        cout << cnt << "\n";
    }

    return 0;
}
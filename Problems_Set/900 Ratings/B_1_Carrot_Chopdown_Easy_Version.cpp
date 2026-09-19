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
        int n,x;
        cin >> n >> x;
         int cnt = 0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            if(a%2 == 0)
                cnt++;
        }
        if(cnt == 0)
            cout << n << "\n";
        else
            cout << cnt*2 << "\n";    
    }

    return 0;
}
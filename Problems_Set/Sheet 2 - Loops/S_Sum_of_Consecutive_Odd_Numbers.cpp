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
        int x,y;
        cin >> x >> y;
        int mx = max(x,y);
        int mn = min(x,y);
        int sum = 0;
        for(int i=mn+1; i<mx; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
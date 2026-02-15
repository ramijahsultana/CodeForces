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
        bool find = false;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            if(x == 67)
            {
                find = true;
            }
        }
        if(find)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
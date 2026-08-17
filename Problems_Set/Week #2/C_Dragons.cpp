#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,n;
    cin >> s >> n;
    bool yes = false;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(x<s)
        {
            s+=y;
            yes =  true;
        }
        else
        {
            yes = false;
        }

    }

    if(yes == true)
        cout << "YES\n";
    else
        cout << "NO\n";
        
        
    return 0;
}
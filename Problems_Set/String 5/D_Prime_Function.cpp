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
        ll n;
        cin >> n;
        
        if(n < 2)
        {
            cout << "NO\n";
            continue;
        }

        bool prime = true;

        for(ll i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime == true)
            cout << "YES\n";
        else
            cout << "NO\n";    

    }


    return 0;
}
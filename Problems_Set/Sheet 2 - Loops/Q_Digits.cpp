#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

        if(n == 0)
        {
            cout << 0;
        }
        else
        {
            while(n > 0)
            {
                cout << n % 10 << " ";
                n /= 10;
            }
        }
        cout << "\n";
    }

    return 0;
}
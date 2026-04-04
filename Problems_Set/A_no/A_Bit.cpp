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
    int x = 0;
    while(t--)
    {
        char a,b,c;
        cin >> a >> b >> c;
        if(a == '+' || b == '+' || c == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
        if(t == 0)
        {
            cout << x << endl;
        }
    }

    return 0;
}
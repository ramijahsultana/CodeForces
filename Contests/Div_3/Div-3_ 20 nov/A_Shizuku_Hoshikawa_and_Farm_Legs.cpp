#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x%2 == 0)
        {
            int res = x / 2;
            res = res/2;
            cout << res+1 << "\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}
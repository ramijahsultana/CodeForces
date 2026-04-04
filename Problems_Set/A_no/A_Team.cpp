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
    int cnt = 0;
    while(t--)
    {
        int one = 0;
        for(int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            if(x == 1)
            {
                one++;
            }
        }
        if(one >= 2)
        {
            cnt++;
        }

        if(t == 0)
        {
            cout << cnt << endl;
        }
    }



    return 0;
}
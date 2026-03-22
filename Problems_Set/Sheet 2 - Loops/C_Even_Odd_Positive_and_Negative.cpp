#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll even = 0, odd = 0, pos = 0, neg = 0;
    while(n--)
    {
        int x;
        cin >> x;
        if(x > 0 && x!=0)
        {
            pos++;
            if(x%2 == 0)
                even++;
            else
                odd++;
        }
        else if(x < 0 && x!=0)
        {
            neg++;
             if(x%2 == 0)
                even++;
            else
                odd++;
        }
        else if(x == 0)
         even++;

    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << pos << "\n";
    cout << "Negative: " << neg << "\n";


    return 0;
}
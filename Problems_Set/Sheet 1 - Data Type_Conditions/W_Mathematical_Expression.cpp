#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    char d, e;
    cin >> a >> d >> b >> e >> c;
    bool ans = false;

    if(d == '+')
    {
        if(a + b == c)
            ans = true;
        else
        {
            cout << a+b << "\n";
            return 0;
        }  
    }
    else if(d == '-')
    {
        if(a - b == c)
            ans = true;
        else
        {
            cout << a-b << "\n";
            return 0;
        }  
    }
    else if(d == '*')
    {
        if(a * b == c)
            ans = true;
        else
        {
            cout << a*b << "\n";
            return 0;
        }  
    }

    if(ans == true)
        cout << "Yes\n";
   
    

    return 0;
}
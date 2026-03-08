#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char x;
    cin >> x;
    if(x >= 'A' && x <= 'Z')
    {
        x = x + 32;
    }
    else 
    {
        x = x - 32;
    }

    cout << x << "\n";

    return 0;
}
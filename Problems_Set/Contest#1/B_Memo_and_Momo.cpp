#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, k;
    cin >> a >> b >> k;

    if(a%k == 0 && b%k == 0)
        cout << "Both\n";
    else if(a%k == 0 && b%k != 0)    
        cout << "Memo\n";
    else if(a%k != 0 && b%k == 0)
        cout << "Momo\n";
    else
        cout << "No One\n";    

    return 0;
}
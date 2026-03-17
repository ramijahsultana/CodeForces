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
     
    int x = n%10;
    int y = n/10;

    if(x%y == 0 || y%x == 0)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}
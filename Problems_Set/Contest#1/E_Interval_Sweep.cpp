#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;
    if(abs(a-b) <= 1 && (a+b) > 0)
        cout << "YES\n";
    else
        cout << "NO\n"; 

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int x = s[0] - '0';
    if(x % 2 == 0)
    {
        cout << "EVEN\n";
    }
    else
    {
        cout << "ODD\n";
    }

    

    return 0;
}
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

    if(x >= '0' && x <= '9')
    {
        cout << "IS DIGIT\n";
    }
    else
    {
        cout << "ALPHA\n";
        if(x >= 'A' && x <= 'Z')
        {
            cout << "IS CAPITAL\n";
        }
        else
        {
            cout << "IS SMALL\n";
        }
    }

    return 0;
}
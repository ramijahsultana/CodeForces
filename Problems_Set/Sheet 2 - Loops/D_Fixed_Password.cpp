#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;

    while(cin >> x)
    {
        if(x == 1999)
        {
            cout << "Correct\n";
            break;
        }
        else
            cout << "Wrong\n";
    }

    return 0;
}
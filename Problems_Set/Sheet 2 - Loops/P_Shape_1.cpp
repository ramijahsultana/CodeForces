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
    for(int i=1; i<=t; i++)
    {

        for(int j=t; j>=i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
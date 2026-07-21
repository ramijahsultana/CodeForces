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
    for(int i=1; i<=n; i++)
    {
        cout << i;
        if(i!=n)
        {
            cout << " "; 
        }
    }
    cout << "\n";

    return 0;
}
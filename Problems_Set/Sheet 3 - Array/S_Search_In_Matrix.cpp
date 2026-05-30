#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    bool found = false;
    int a[n][m] = {0};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j] == x)
            {
                found = true;
                break;
            }
        }
    } 

    if(found)
        cout << "will not take number\n";
    else
        cout << "will take number\n";

    return 0;
}
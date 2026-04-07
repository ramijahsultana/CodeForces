#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[6][6];
    int x, y;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    int moves = abs(x - 3) + abs(y - 3);
    cout << moves << "\n";

    return 0;
}
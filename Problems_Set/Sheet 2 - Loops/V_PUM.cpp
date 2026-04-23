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

    int x = 1;
    for(int i = 1; i <= n; i++)
    {

        for(int j = 1; j <=4; j++)
        {
            if(j%4 == 0)
                cout << "PUM";
            else
                cout << x << " ";
            x++;
        }
        cout << "\n";
    }

    return 0;
}
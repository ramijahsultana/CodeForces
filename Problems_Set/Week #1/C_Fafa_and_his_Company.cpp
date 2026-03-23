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
    
    int cnt = 0;
    for(int i=1;i<n; i++)
    {
        if(n%i == 0)
            cnt++;
    }
    cout << cnt << "\n";

    return 0;
}
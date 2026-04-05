#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x > k && x > 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
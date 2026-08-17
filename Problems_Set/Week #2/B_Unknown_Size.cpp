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
    vector<int> v;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cnt++;
            v.pb(i);
        }
    }
    cout << cnt << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
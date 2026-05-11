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
    vector<int> a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    int mn = *min_element(a.begin()+1, a.end());


    for(int i=1; i <= n; i++)
    {
        if(a[i] == mn)
        {
            cout << mn << " " << i << " ";
            break;
        }
    }

    return 0;
}
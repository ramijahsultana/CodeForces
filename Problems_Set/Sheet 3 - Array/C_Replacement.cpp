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
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] < 0)
        {
            a[i] = 2;
        }
        else if(a[i] > 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
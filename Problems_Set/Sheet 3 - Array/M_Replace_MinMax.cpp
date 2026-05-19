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
        cin >> a[i];

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    
    for(int i=0; i<n; i++)
    {
        if(a[i] == mn)
            a[i] = mx;
        else if(a[i] == mx)
            a[i] = mn;
    }

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << "\n";

    return 0;
}
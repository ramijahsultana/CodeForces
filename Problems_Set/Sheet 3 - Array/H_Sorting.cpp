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

    for(int i=0; i<n-1; i++)
    {
        int mn = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[mn])
                mn = j;
        }
        swap(a[i], a[mn]);
    }

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << "\n";

    return 0;
}
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
    int a[n], b[m];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];
    
    bool isSubsequence = true;
    int j = 0;
    for(int i=0; i<n && j<m; i++)
    {
        if(a[i] == b[j])
            j++;
    }
    if(j != m)
        isSubsequence = false;
    cout << (isSubsequence ? "YES" : "NO") << endl;
    return 0;
}
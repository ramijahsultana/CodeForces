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
    for(int i = 0; i < n; i++)  
        cin >> a[i];

    vector<int> b = a;
    reverse(b.begin(), b.end());
    
    if(a == b)  
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
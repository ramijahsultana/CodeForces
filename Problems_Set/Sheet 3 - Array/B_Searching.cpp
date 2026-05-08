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
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll x;
    cin >> x;

    bool found = false;
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            cout << i << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "-1\n";
    }

    
    return 0;
}
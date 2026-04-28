#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> fiboSeq;
    ll a = 0, b = 1;

    for(int i = 0; i < n; i++){
        fiboSeq.push_back(a);
        ll next = a + b;
        a = b;
        b = next;
    }

    for(auto x : fiboSeq)
        cout << x << " ";

    
    return 0;
}
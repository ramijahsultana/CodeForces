#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll fibo(ll n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> fiboSeq;
    while(n--){
        fiboSeq.pb(fibo(n));
    }

    sort(fiboSeq.begin(), fiboSeq.end());
    for(auto x : fiboSeq)
        cout << x << " ";
    
    return 0;
}
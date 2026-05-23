#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll fibo(int n)
{
    if(n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    cout << fibo(n-1) << endl;

    return 0;
}
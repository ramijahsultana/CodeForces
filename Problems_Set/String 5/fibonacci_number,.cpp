#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fibo(n) << endl;

    

    return 0;
}
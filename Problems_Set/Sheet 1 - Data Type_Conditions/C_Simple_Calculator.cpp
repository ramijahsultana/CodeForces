#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int s = a + b;
    ll m = (ll)a * b;
    int d = a - b;

    cout << a << " + " << b << " = " << s << endl;
    cout << a << " * " << b << " = " << m << endl;  
    cout << a << " - " << b << " = " << d << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a;
    cin >> a;
    if (a == (int)a)
        cout << "int " << (int)a << "\n";
    else
        cout << "float " << (int)a << " " << (a - (int)a) << "\n";

    return 0;
}
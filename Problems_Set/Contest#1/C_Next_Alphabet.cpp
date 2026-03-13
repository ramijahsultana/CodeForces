#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a;
    cin >> a;

    if(a >= 'a' && a < 'z')
        cout << char(a+1) << "\n";
    else
        cout << "a\n";    

    return 0;
}
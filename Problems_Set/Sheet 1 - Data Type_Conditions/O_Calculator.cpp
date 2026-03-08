#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    char s;
    cin >> a >> s >> b;
    if(s == '+')
    {
        cout << a + b << "\n";
    }
    else if(s == '-')
    {
        cout << a - b << "\n";
    }
    else if(s == '*')
    {
        cout << a * b << "\n";
    }
    else if(s == '/')
    {
        cout << a / b << "\n";
    }


    return 0;
}
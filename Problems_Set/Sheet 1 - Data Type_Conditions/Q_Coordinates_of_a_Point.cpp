#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    cin >> a >> b;
    if(a > 0 && b > 0)
    {
        cout << "Q1\n";
    }
    else if(a < 0 && b > 0)
    {
        cout << "Q2\n";
    }
    else if(a < 0 && b < 0)
    {
        cout << "Q3\n";
    }
    else if(a > 0 && b < 0)
    {
        cout << "Q4\n";
    }
    else if(a == 0 && b == 0)
    {
        cout << "Origem\n";
    }
    else if(a == 0)
    {
        cout << "Eixo Y\n";
    }
    else if(b == 0)
    {
        cout << "Eixo X\n";
    }

    return 0;
}
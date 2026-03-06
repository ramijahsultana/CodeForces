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
    bool multiple = false;
    if(a > b)
    {
        if(a % b == 0)
        {
            multiple = true;
        }
    }
    else
    {
        if(b % a == 0)
        {
            multiple = true;
        }
    }

    if(multiple)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }

    return 0;
}
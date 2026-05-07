#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++)
    {
        if(i == 0)
        {
            a[i] = toupper(a[i]);
        }
    }
    cout << a << "\n";

    return 0;
}
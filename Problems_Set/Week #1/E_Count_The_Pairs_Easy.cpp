#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;     
    if(max(a, c) <= b) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }

    return 0;
}
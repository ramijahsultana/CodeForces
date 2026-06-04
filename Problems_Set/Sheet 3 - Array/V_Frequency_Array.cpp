#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;
    int freq[100001] = {0};
    for(int i=0; i<t; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    for(int i=1; i<=n; i++)
        cout << freq[i] << "\n";

    return 0;
}
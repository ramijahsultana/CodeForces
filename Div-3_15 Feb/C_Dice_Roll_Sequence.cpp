#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i] == a[i+1] || a[i] + a[i+1] == 7)
            {
                cnt++;
                if(a[i+1] == 6)
                {
                    a[i+1]--;
                }
                else
                {
                    a[i+1]++;
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
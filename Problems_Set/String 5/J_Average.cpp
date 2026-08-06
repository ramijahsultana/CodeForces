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
    double sum = 0;
    for(int i=0; i<n; i++)
    {
        double x;
        cin >> x;
        sum += x;
    }
    double average = sum / n;
    cout << fixed << setprecision(7) << average << "\n";

    return 0;
}
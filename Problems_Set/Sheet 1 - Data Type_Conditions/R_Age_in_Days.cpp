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

    int year = n/365;
    n = n % 365;

    int month = n/30;
    int day = n % 30;

    cout << year << " years\n";
    cout << month << " months\n";   
    cout << day << " days\n";

    return 0;
}
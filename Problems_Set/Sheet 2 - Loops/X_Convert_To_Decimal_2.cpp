#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        int countOnes = __builtin_popcountll(N); 

        long long result = (1LL << countOnes) - 1;

        cout << result << "\n";
    }
    return 0;

}
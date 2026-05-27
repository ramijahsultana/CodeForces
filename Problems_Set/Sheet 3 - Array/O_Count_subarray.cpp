#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long ans = 0;
        long long cnt = 1;

        ans = 1; 

        for (int i = 1; i < N; i++)
        {
            if (A[i] >= A[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            ans += cnt;
        }

        cout << ans << '\n';
    }

    return 0;
}
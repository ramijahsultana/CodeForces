#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<char> dq(s.begin(), s.end());

    long long score = 0;

    while (!dq.empty())
    {
        char c = dq.front();
        dq.pop_front();

        if (c == 'V')
        {
            score += 5;
        }
        else if (c == 'W')
        {
            score += 2;
        }
        else if (c == 'X')
        {
            if (!dq.empty())
            {
                dq.pop_front(); 
            }
        }
        else if (c == 'Y')
        {
            if (!dq.empty())
            {
                char nxt = dq.front();
                dq.pop_front();
                dq.push_back(nxt); 
            }
        }
        else if (c == 'Z')
        {
            if (!dq.empty())
            {
                if (dq.front() == 'V')
                {
                    score /= 5;
                    dq.pop_front();
                }
                else if (dq.front() == 'W')
                {
                    score /= 2;
                    dq.pop_front();
                }
            }
        }
    }

    cout << score << '\n';
    return 0;
}
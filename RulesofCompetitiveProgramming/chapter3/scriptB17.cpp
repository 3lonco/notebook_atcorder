#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dp[7] = {10000};
int N = 6;
int H[6] = {30, 40, 60, 10, 10, 50};

int dynamic(int n)
{
    if (n >= N)
    {
        return 0;
    }

    if (n + 1 < N)
    {

        dp[n + 1] = min(dp[n + 1], dp[n] + (abs(H[n + 1] - H[n])));
        dynamic(n + 1);
    }
    if (n + 2 < N)
    {
        dp[n + 2] = min(dp[n + 2], dp[n] + (abs(H[n + 2] - H[n])));
        dynamic(n + 2);
    }
    return 0;
}

vector<int> root;

int main()
{
    rep(i, 7)
    {
        dp[i] = 1000;
    }
    dp[0] = 0;
    dynamic(0);
    rep(i, N)
    {
        cout << dp[i] << endl;
    }
    int Place = N - 1;
    while (true)
    {
        if (Place == 0)
        {
            break;
        }

        root.push_back(Place);

        if (dp[Place - 1] + abs(H[Place] - H[Place - 1]) == dp[Place])
        {
            Place = Place - 1;
        }
        else
        {
            Place = Place - 2;
        }
    }
    cout << "1\n";

    for (int i = 0; i < root.size(); i++)
    {
        cout << root[root.size() - 1 - i] + 1 << endl;
    }
}
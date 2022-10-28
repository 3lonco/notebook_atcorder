#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dp[7] = {100};
int N = 5;
int A[4] = {2, 4, 1, 3};
int B[3] = {5, 3, 3};

int dynamic(int n)
{
    if (n >= N)
    {
        return 0;
    }

    if (n + 1 < N)
    {
        dp[n + 1] = min(dp[n + 1], dp[n] + A[n]);
        dynamic(n + 1);
    }
    if (n + 2 < N)
    {
        dp[n + 2] = min(dp[n + 2], dp[n] + B[n]);
        dynamic(n + 2);
    }
    return 0;
}

int main()
{
    rep(i, 7)
    {
        dp[i] = 1000;
    }
    dp[0] = 0;

    dynamic(0);
    rep(i, 7)
    {
        cout << dp[i] << endl;
    }
}
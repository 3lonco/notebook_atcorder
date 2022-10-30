
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dp[100] = {false};
int A = 3;
int B = 1;
int C = 2;
int D = 4;

int offset = 50;
int dfs(int n, int sum)
{
    cout << n << sum << endl;
    if (sum == 7)
    {
        return n;
    }
    if (n > 4)
    {
        return 0;
    }

    if (n == 0)
    {
        dfs(n + 1, sum + A);
        dfs(n + 1, sum - A);
    }
    if (n == 1)
    {
        dfs(n + 1, sum + B);
        dfs(n + 1, sum - B);
    }
    if (n == 2)
    {
        dfs(n + 1, sum + C);
        dfs(n + 1, sum - C);
    }
    if (n == 3)
    {
        dfs(n + 1, sum + D);
        dfs(n + 1, sum - D);
    }
    return 0;
}

int main()
{

    cout << dfs(0, 0);
}
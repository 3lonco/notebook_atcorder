#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n_rows = 4; // 行数
int n_cols = 5; // 列数
int value = 0;  // 初期値

vector<vector<int>> dp(n_rows, vector<int>(n_cols, value));

vector<int> dx = {1, 0};
vector<int> dy = {0, 1};
void sitiation()
{
    rep(i, n_rows)
    {
        rep(j, n_cols)
        {
            cout << dp[i][j] << "\t";
        }
        cout << "\n";
    }
}
int cnt = 0;
int rec(int x, int y)
{
    cout << x << y << endl;
    if (x == n_rows - 1 && y == n_cols - 1)
    {
        cnt += 1;
    }

    if (x + 1 < n_rows)
    {
        dp[x + 1][y] = dp[x + 1][y] + dp[x][y];
        sitiation();
        rec(x + 1, y);
    }
    if (y + 1 < n_cols)
    {
        dp[x][y + 1] = dp[x][y + 1] + dp[x][y];
        sitiation();
        rec(x, y + 1);
    }
    return 0;
}

int main()
{
    dp[0][0] = 1;
    rec(0, 0);
    cout << cnt;
}
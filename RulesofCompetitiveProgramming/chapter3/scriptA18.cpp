#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N = 3;
int S = 7;
int A[4] = {0, 2, 2, 3};
vector<int> Answer;
bool dp[69][10009];

int main()
{
    dp[0][0] = true;
    for (int i = 1; i <= S; i++)
        dp[0][i] = false;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            if (j < A[i])
            {
                if (dp[i - 1][j] == true)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            if (j >= A[i])
            {
                if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
        }
    }
    if (dp[N][S] == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
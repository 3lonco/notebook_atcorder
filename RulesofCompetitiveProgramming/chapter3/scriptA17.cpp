#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dp[7] = {10000};
int K = 5;
int A[4] = {2, 4, 1, 3};
int B[3] = {5, 3, 3};
vector<int> Answer;
int dynamic(int n)
{
    if (n > K)
    {
        return 0;
    }

    if (n + 1 < K)
    {

        dp[n + 1] = min(dp[n + 1], dp[n] + A[n]);
        dynamic(n + 1);
    }
    if (n + 2 < K)
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

    cout << dp[K - 1] << endl;

    int Place = K - 1;
    while (true)
    {
        cout << "place" << Place << dp[Place] << endl;
        Answer.push_back(Place);
        if (Place == 0)
            break;

        if (dp[Place - 1] + A[Place] == dp[Place])
            Place = Place - 1;
        else
            Place = Place - 2;
    }
    reverse(Answer.begin(), Answer.end());
    cout << Answer.size() << endl;
    rep(i, Answer.size())
    {
        if (i >= 1)
            cout << " ";
        cout << Answer[i] + 1;
    }
    cout << endl;
    return 0;
}
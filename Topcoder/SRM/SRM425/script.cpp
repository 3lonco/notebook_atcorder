#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool grid[100][100] = {false};
int vx[] = {1, -1, 0, 0};
int vy[] = {0, 0, 1, -1};
double prob[4];

double dfs(int x, int y, int n)
{
    cout << x << y << ":" << endl;

    if (grid[x][y])
    {
        cout << "already came\n";
        return 0;
    }
    if (n == 0)
    {
        cout << "Success\n";
        return 1;
    }

    grid[x][y] = true;
    double ret = 0;
    for (int i = 0; i < 4; i++)
    {

        cout << x << "," << y << " : " << i << endl;
        ret += dfs(x + vx[i], y + vy[i], n - 1) * prob[i];
        cout << "ret=" << ret << endl;
    }
    cout << x << y << "false\n";
    grid[x][y] = false;
    return ret;
}

double getProbalility(int n, int east, int west, int south, int north)
{
    prob[0] = east / 100.0;
    prob[1] = west / 100.0;
    prob[2] = south / 100.0;
    prob[3] = north / 100.0;
    return dfs(50, 50, n);
}

bool test[6] = {false};

int tester(int n)
{
    cout << "n is" << n << "\n";

    if (test[n] == true)
        return 0;
    if (n == 6)
        return 1;
    if (n == 0)
        return 0;
    test[n] = true;
    rep(i, 6)
    {
        cout << test[i] << "\t";
    }
    cout << "\n";
    int a;
    a = tester(n + 1);
    cout << n << "a" << a << endl;

    return a;
}

int main()
{
    cout << tester(3);
}
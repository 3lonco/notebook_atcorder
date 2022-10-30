#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n = 4;
vector<string> s(n);
int num = 8;
vector<int> A(num);
vector<int> B(num);
vector<int> C(num);
vector<int> D(num);

vector<int> ans(16, -1);

void dataGet()
{
    rep(i, n)
    {
        cin >> s[i];
    }

    rep(i, num)
    {
        cin >> A[i];
    }

    rep(i, num)
    {
        cin >> B[i];
    }

    rep(i, num)
    {
        cin >> C[i];
    };
    rep(i, num)
    {
        cin >> D[i];
    }
}

void check(int i, bool flag)
{

    rep(j, num)
    {
        int temp;
        if (i == 0)
        {
            temp = A[j] - 1;
        }
        else if (i == 1)
        {
            temp = B[j] - 1;
        }
        else if (i == 2)
        {
            temp = C[j] - 1;
        }
        else if (i == 3)
        {
            temp = D[j] - 1;
        }
        if (flag)
        {
            if (ans[temp] != 0)
            {
                ans[temp] = 1;
            }
        }
        else
        {
            ans[temp] = 0;
        }
    }
}

int main()
{
    dataGet();
    rep(i, n)
    {
        if (s[i] == "Y")
        {
            check(i, true);
        }
        if (s[i] == "N")
        {
            check(i, false);
        }
    }
    rep(i, 16)
    {
        if (ans[i] == 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
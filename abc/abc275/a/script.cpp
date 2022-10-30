#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;
    long long d[1000];

    rep(i, N)
    {
        cin >> d[i];
    }

    if (N == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    long long max = 0;
    int place = 0;

    rep(i, N)
    {
        if (d[i] > max)
        {
            max = d[i];
            place = i + 1;
        }
    }
    cout << place << endl;
    return 0;
}
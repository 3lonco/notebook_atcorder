#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long A, B, C, D, E, F;
long long amari = 998244353;
int main()
{
    cin >> A >> B >> C >> D >> E >> F;

    long long ans;

    ans = (A * B * C) - (D * E * F);
    ans = ans % amari;
    cout << ans << endl;
}
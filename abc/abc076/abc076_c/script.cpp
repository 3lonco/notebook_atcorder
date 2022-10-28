#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string S;

    string T;
    string A = "UNRESTORABLE";
    cin >> S;
    cin >> T;

    if (S.size() < T.size())
    {
        cout << A << endl;
        return 0;
    }

    bool flag_find = false;
    for (int i = S.size() - T.size(); i >= 0; i--)
    {

        if (S[i] == '?' || S[i] == T[0])
        {
            bool flag = true;

            for (int j = 1; j < T.size(); j++)
            {
                if (S[i + j] != T[j] && S[i + j] != '?')
                {

                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                for (int j = 0; j < T.size(); j++)
                {
                    S[i + j] = T[j];
                }
                flag_find = true;
                break;
            }
        }
    }
    if (flag_find == true)
    {
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '?')
            {
                S[i] = 'a';
            }
        }
        cout << S << "\n";
    }
    else
    {
        cout << A << "\n";
    }
    return 0;
}
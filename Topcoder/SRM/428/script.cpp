#include <bits/stdc++.h>
using namespace std;

int find(string s)
{
    for (int i = s.size();; i++)
    {
        bool flag = true;
        for (int j = 0; j < s.size(); j++)
        {
            if ((i - j - 1) < s.size() && s[j] != s[i - j - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            return i;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    int ans;
    ans = find(s);
    std::cout << ans;
}
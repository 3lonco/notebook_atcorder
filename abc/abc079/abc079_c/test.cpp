#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    map<string, int> m;
    vector<string> s = {"ai", "bc", "sa"};

    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]] += i * i;
    }

    map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << (*it).first << " " << (*it).second << endl;
        it++;
    }
}
#include <bits/stdc++.h>
using namespace std;

void solve(const int &Case)
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    vector<int> ans(n + 2);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    char str[n + 1];
    gets(str + 1);

    for (int i = 1, x = 1, y = n; i <= n; ++i)
    {
        if (str[i] == 'R')
            b[i] = a[y--];
        else
            b[i] = a[x++];
    }

    ans[n + 1] = 1;
    for (int i = n; i >= 1; --i)
    {
        ans[i] = ans[i + 1] * b[i] % m;
    }

    for (int i = 1; i <= n; ++i)
        cout << ans[i];
    cout << '\n';
}

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve(i);
    }
    return 0;
}
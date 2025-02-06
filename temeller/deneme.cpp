#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back

int32_t main()
{
    int n, m, a;
    cin >> n >> m >> a;
    if (n % a == 0)
    {
        n = n / a;
    }
    else
    {
        n = (n / a) + 1;
    }
    if (m % a == 0)
    {
        m = m / a;
    }
    else
    {
        m = (m / a) + 1;
    }
    cout << n * m;
    return 0;
}
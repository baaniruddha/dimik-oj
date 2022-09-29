//https://dimikoj.com/problems/34/division-2-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, i;
    long long a, b, c, m;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        m = a * b;
        while (c >= m) {
            cout << m << "\n";
            m += (a * b);
        }
        if (t > 0) {
            cout << "\n";
        }
    }
    return 0;
}

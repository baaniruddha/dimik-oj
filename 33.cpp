//https://dimikoj.com/problems/33/division-1-by

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
        while (b >= a) {
            if (a % c == 0) {
                cout << a << "\n";
                a += c;
                continue;
            }
            a++;
        }
        cout << "\n";
    }
    return 0;
}

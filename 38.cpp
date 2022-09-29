//https://dimikoj.com/problems/38/herok-rajjo-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, n, m, i, j;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (i = 0; i < n; i++) {
            for (j = 0; j <= i; j++) {
                if (j == i) {
                    cout << m;
                }
                else {
                    cout << m << " ";
                }
            }
            cout << "\n";
        }
        for (i = n - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (j == i - 1) {
                    cout << m;
                }
                else {
                    cout << m << " ";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}

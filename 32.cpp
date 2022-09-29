//https://dimikoj.com/problems/32/multiplication-of-x-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t;
    long long a, b, i;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (b > a) {
            for (i = 1; i <= b; i++) {
                if (i % a == 0) {
                    cout << i << "\n";
                }
            }
        }
        else {
            cout << "Invalid!" << "\n";
        }
        cout << "\n";
    }
    return 0;
}

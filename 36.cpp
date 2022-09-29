//https://dimikoj.com/problems/36/number-disaster-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, i;
    long long n, rev;
    cin >> t;
    while (t--) {
        cin >> n;
        rev = 0;
        while (n != 0) {
            rev = rev * 10;
            rev = rev + n % 10;
            n = n / 10;
        }
        cout << rev << "\n";
    }
    return 0;
}

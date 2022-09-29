//https://dimikoj.com/problems/27/armstrong-number-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, n, temp = 0, res = 0, rem;
    cin >> t;
    while (t--) {
        cin >> n;
        temp = n;
        res = 0;
        while (temp != 0) {
            rem = temp % 10;
            res += (rem * rem * rem);
            temp /= 10;
        }
        if (res == n) {
            cout << n << " is an armstrong number!" << "\n";
        }
        else {
            cout << n << " is not an armstrong number!" << "\n";
        }
    }
    return 0;
}

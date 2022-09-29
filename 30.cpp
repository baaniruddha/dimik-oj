//https://dimikoj.com/problems/30/perfect-number-1-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t;
    long long int n, i, sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            cout << "YES, " << n << " is a perfect number!" << "\n";
        }
        else {
            cout << "NO, " << n << " is not a perfect number!" << "\n";
        }
    }
    return 0;
}

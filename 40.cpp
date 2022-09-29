//https://dimikoj.com/problems/40/sum-of-the-series-1-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, x, k, i, sum, power;
    cin >> t;
    while (t--) {
        cin >> x >> k;
        sum = 1, power = 1;
        for (i = 1; i <= k; i++) {
            power = power * x;
            sum += power;
        }
        cout << "Result = " << sum << "\n";
    }
    return 0;
}

//https://dimikoj.com/problems/10/52-problem-book-run-rate-1-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t;
    float r1, r2, b, crr, arr;
    cin >> t;
    while (t--) {
        cin >> r1 >> r2 >> b;
        crr = r2 / (((50 * 6) - b) / 6);
        if (r2 > r1) {
            arr = 0.00;
        }
        else {
            arr = ((r1 - r2) + 1) / (b / 6);
        }
        cout << fixed << setprecision (2) << crr << " " << fixed << setprecision (2) << arr << "\n";
    }
}

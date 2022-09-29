//https://dimikoj.com/problems/35/out-of-the-circle-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    double t,  Xc, Yc, r, X, Y, p;
    cin >> t;
    while (t--) {
        cin >> Xc >> Yc;
        cin >> r;
        cin >> X >> Y;
        p = (sqrt ((pow ((X - Xc), 2)) + (pow ((Y - Yc), 2))));
        if (p < r) {
            cout << "The point is inside the circle" << "\n";
        }
        else {
            cout << "The point is not inside the circle" << "\n";
        }
    }
    return 0;
}

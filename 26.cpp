//https://dimikoj.com/problems/26/alien-guppy-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, count;
    double x;
    cin >> t;
    while (t--) {
        count = 0;
        cin >> x;
        while (x > 1.0) {
            x = x / 2;
            count++;
        }
        cout << count << " days" << "\n";
    }
    return 0;
}

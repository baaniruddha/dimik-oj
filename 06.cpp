//https://dimikoj.com/problems/6/52-problem-book-find-the-sum-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int T, i, n, LSD, MSD;
    cin >> T;
    while (T--) {
        cin >> n;
        LSD = n % 10;
        MSD = n;
        while (n != 0) {
            MSD = n % 10;
            n = n / 10;
        }
        cout << "Sum = " << LSD + MSD << "\n" ;
    }
    return 0;
}

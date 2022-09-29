//https://dimikoj.com/problems/9/52-problem-book-perfect-squares-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int T, n, sq_root;
    cin >> T;
    while (T--) {
        cin >> n;
        sq_root = sqrt (n);
        if (sq_root * sq_root == n) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}

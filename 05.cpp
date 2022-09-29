//https://dimikoj.com/problems/5/52-problem-book-box-1-by-dimik-computing
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    int T, i, N, j;
    cin >> T;
    while (T--) {
        cin >> N;
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= N; j++) {
                cout << "*";
            }
            cout << "\n";
        }
        if (T > 0)
            cout << "\n";
    }
    return 0;
}

//https://dimikoj.com/problems/12/52-problem-book-factorial-100-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int T, n, count, i, m ;
    cin >> T;
    while (T--) {
        cin >> n;
        count = 0;
        for (i = 2 ; i <= n; i++) {
            m = i;
            while (m % 5 == 0) {
                count++;
                m = m / 5;
            }
            m = 0;
        }
        cout << count << "\n";
    }
    return 0;
}

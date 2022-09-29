//https://dimikoj.com/problems/4/52-problem-book-divisor-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int T, count = 0, i, N;
    cin >> T;
    while (T--) {
        count++;
        cout << "Case " << count << ":";
        cin >> N;
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                cout << " " << i ;
            }
        }
        cout << "\n";
    }	
    return 0;
}

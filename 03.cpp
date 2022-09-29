//https://dimikoj.com/problems/3/52-problem-book-decreasing-numbers-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int i, count = 0;
    for (i = 1000; i >= 1; i--) {
        cout << i << "\t";
        count++;
        if (count % 5 == 0) {
            cout << "\n";
        }
    }
    return 0;
}

//https://dimikoj.com/problems/2/52-problem-book-odd-even-2-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int T, i;
    string n;
    cin >> T;
    for (i = 1; i <= T; i++) {
        cin >> n;
        if (n[n.size() - 1] % 2 == 0) {
            cout << "even" << "\n";
        }
        else
            cout << "odd" << "\n";
    }
    return 0;
}

//https://dimikoj.com/problems/8/52-problem-book-smaller-to-larger-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int T, count = 0, i, n;
    cin >> T;
    while (T--) {
        count++;
        for (i = 1; i <= 3; i++) {
            cin >> n;
            v.push_back (n);
        }
        sort (v.begin(), v.end());
        cout << "Case " << count << ":";
        for (i = 0; i < v.size(); i++) {
            cout << " " << v[i] ;
        }
        cout << "\n";
        v.clear();
    }
    return 0;
}

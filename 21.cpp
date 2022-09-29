//https://dimikoj.com/problems/21/reverse-show-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, i, count;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline (cin, s);
        for (i = s.size() - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}

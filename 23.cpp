//https://dimikoj.com/problems/23/alphabet-to-number-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, i;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline (cin, s);
        for (i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                cout << s[i] - 64;
            }
        }
        cout << "\n";
    }
    return 0;
}

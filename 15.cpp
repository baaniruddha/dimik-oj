//https://dimikoj.com/problems/15/52-problem-book-counting-characters-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, i, count[26];
    string s;
    cin >> t;
    cin.ignore();
    while (t--){
        getline (cin, s);
        for (i = 0; i < 26; i++) {
            count[i] = 0;
        }
        for (i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count[s[i] - 'a']++;
            }
        }
        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                char c = 'a' + i ;
                cout << c << " = " << count[i] << "\n";
            }
        }
        if (t != 0) {
            cout << "\n";
        }
    }
    return 0;
}

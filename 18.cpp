//https://dimikoj.com/problems/18/52-problem-book-vowels-and-consonants-by-dimik-computing

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
        string v, c;
        getline (cin, s);
        for (i = 0; i < s.size(); i++) {
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                    v += s[i];
                }
                else {
                    c += s[i];
                }
            }
        }
        cout << v << "\n" << c << "\n";
    }
    return 0;
}

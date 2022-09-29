//https://dimikoj.com/problems/17/52-problem-book-counting-vowels-by-dimik-computing

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
        int count = 0;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                count++;
            }
        }
        cout << "Number of vowels = " << count << "\n";
    }
    return 0;
}

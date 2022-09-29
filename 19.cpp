//https://dimikoj.com/problems/19/52-problem-book-counting-words-1-by-dimik-computing

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
        count = 0;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                count++;
            }
        }
        cout << "Count = " << count + 1 << "\n";
    }
    return 0;
}
20
//https://dimikoj.com/problems/20/52-problem-book-counting-words-2-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, count;
    char s[10001];
    cin >> t;
    cin.ignore();
    while (t--) {
        cin.getline (s, 10001);
        char *word;
        word = strtok (s, ",!;?. ");
        count = 0;
        while (word != NULL) {
            if (strlen (word) > 0) {
                count++;
            }
            word = strtok (NULL, ",!,;,?. ");
        }
        cout << "Count = " << count << "\n";
    }
    return 0;
}

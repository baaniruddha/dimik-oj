//https://dimikoj.com/problems/14/52-problem-book-cumulus-characters-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, count, i;
    char fl[10001];
    char sl[2];
    cin >> t;
    while (t--) {
        cin.ignore();
        cin.getline (fl, 10001);
        cin >> sl;
        count = 0;
        for (i = 0; i < strlen (fl); i++) {
            if (sl[0] == fl[i]) {
                count++;
            }
        }
        if (count != 0) {
            cout << "Occurrence of '" << sl[0] << "' in '" << fl << "' = " << count << "\n";
        }
        else {
            cout << "'" << sl[0] << "' is not present" << "\n";
        }
    }
    return 0;
}

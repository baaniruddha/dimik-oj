//https://dimikoj.com/problems/37/word-sorting-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int size, i, j;
    cin >> size;
    string s[size];
    for (i = 0; i < size; i++) {
        cin >> s[i];
    }
    sort (s, s + size);
    for (j = 0; j < size; j++) {
        cout << s[j] << "\n";
    }
    return 0;
}

//https://dimikoj.com/problems/29/symbol-identity-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t;
    char ch;
    cin >> t;
    while (t--) {
        cin >> ch;
        if (ch >= 'a' && ch <= 'z') {
            cout << "Lowercase Character" << "\n";
        }
        else if (ch >= 'A' && ch <= 'Z') {
            cout << "Uppercase Character" << "\n";
        }
        else if (ch >= '0' && ch <= '9') {
            cout <<  "Numerical Digit" << "\n";
        }
        else {
            cout << "Special Character" << "\n";
        }
    }
    return 0;
}

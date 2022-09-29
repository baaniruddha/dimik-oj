//https://dimikoj.com/problems/39/pallidrom-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t;
    string string1, string2;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline (cin, string1);
        string2 = string1;
        reverse (string1.begin(), string1.end());
        if (string1 == string2) {
            cout << "Yes! It is Palindrome!" << "\n";
        }
        else {
            cout << "Sorry! It is not Palindrome!" << "\n";
        }
    }
    return 0;
}

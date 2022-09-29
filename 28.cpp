//https://dimikoj.com/problems/28/random-array-by

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int n, i, j, array[101], sorted;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }
    sorted = true;
    for (i = 1; i < n; i++) {
        if (array[i] < array[i - 1]) {
            sorted = 0;
            break;
        }
    }
    if (sorted == true) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    return 0;
}

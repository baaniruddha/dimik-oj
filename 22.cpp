//https://dimikoj.com/problems/22/prime-number-by

#include<bits/stdc++.h>
using namespace std;

#define size 100001
char ara[size];

void sieve()
{
    int i, j, root;
    for (i = 2; i < size; i++)
        ara[i] = 1;
    root = sqrt (size);
    for (i = 2; i <= root; i++) {
        if (ara[i] == 1) {
            for (j = i; i * j <= size; j++)
                ara[i * j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int t, a, b, i, count;
    sieve();
    cin >> t;
    while (t--) {
        count = 0;
        cin >> a >> b;
        for (i = a; i <= b; i++) {
            if (ara[i])
                 count++;
        }
        cout << count << "\n";
    }
    return 0;
}

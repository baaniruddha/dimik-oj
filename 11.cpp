//https://dimikoj.com/problems/11/52-problem-book-factorial-by-dimik-computing

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

long long int Fact (int n)
{
    if (n == 0)
        return 1;
    else
        return (n * Fact (n - 1));
}
int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    int n, t;
    ll a;
    cin >> t;
    while (t--) {
        cin >> n;
        a = Fact (n);
        cout << a << "\n";
    }
    return 0;
}

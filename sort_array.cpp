#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Ascending order sort**
    sort(a, a + n); // starting pointer is 'a' and ending pointer is 'a+n'.
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // Descending Order Sort**

    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
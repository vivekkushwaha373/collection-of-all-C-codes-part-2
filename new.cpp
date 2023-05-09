#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "enter no. of the elements" << endl;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter element" << i + 1 << endl;
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = -1;
            }
            else
                continue;
        }
        cout << "the unique elements are" << endl;
        for (j = 0; j < n; j++)
        {
            if (a[j] != -1)
                cout << a[j] << endl;
        }
    }
}
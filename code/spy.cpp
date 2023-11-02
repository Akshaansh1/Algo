#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        int k = 0;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] != arr[i])
            {
                k = i;
                flag = 1;
                break; 
            }
        }

        if (flag == 1)
        {
            cout << k + 1 << endl; 
        }
        else
        {
            cout << n << endl; 
        }
    }
}

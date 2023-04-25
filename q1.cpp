#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    // int a, b;
    string a, b;
    cin >> a >> b;
    // cout << a * b << endl;
    int len1 = a.length();
    int len2 = b.length();
    int A[len1], B[len2], C[len1+len2];
    for(int i = 0 ; i < len1 + len2 ; i++)
    C[i] = 0;
    for(int i= 0 ; i < len1 ; i++)
    A[i] = (int)a[i] - 48;
    for(int i= 0 ; i < len2 ; i++)
    B[i] = (int)b[i] - 48;
    int step = 0;

    for(int i = len2 - 1 ; i >= 0 ; i--)
    {
        for(int j = len1 - 1 ; j >= 0 ; j--)
        {
            C[len1 + len2 - j - step] += A[j]*B[i];
            // C[len1 + len2 - 1 - j - step] += 1;

        }
        step++;
    }
    for(int i = 0 ; i < len1 + len2 ; i++)
    cout << C[i] << ' ';
    cout << endl;
    for(int i = sizeof(C)/sizeof(C[0]) - 1; i >= 0 ; i--)
    {
        if(C[i] >= 10)
        C[i-1] += C[i] - (C[i])%10;
        C[i] = C[i]%10;
    }
    for(int i = 0 ; i < len1 + len2 ; i++)
    cout << C[i] << ' ';
    cout << endl;
    
}


//7125486542
//23456583
#include <bits/stdc++.h>
using namespace std;

int calcmiddle(vector<int> &vec, int l, int mid, int r)
{
    int lmaxi = -100000;
    int rmaxi = -1000000;
    int sum = 0;
    for(int i = mid ; i >= l ; i --)
    {
        sum += vec[i];
        lmaxi = max(lmaxi, sum);
    }
    sum = 0;
    for(int i = mid + 1 ; i <= r ; i ++)
    {
        sum += vec[i];
        rmaxi = max(rmaxi, sum);
    }
    return  lmaxi + rmaxi;
}



int LSS(vector<int> &vec, int l, int r)
{
    int mid = (l + r) / 2;
    if(l == r)
    {
        return vec[l];
    }
    int leftans = LSS(vec, l, mid);
    int rightans = LSS(vec, mid + 1, r);
    int between = calcmiddle(vec, l, mid, r);

    return max(leftans, max(rightans, between));
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i ++)
    {
        int temp;
        cin >> temp;
        vec[i] = temp;
    }
    int pr = LSS(vec, 0, n-1);
    cout << pr << endl;
}


// -5 -16 22 -13 1 11 1 6 -13 -8 -1 10 5 -6 21 24 16 15 -8 -20 -6 -1 1 6
#include <bits/stdc++.h>
using namespace std;

int RCP(vector<int> &price){
    int n = price.size();
    int dp[n] = {0};
    dp[0] = price[0];
    for(int i = 1 ; i < n ; i ++)
    {
        dp[i] = max(dp[i-1] + price[0], price[i]);
    }
    return dp[n-1];
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> price(n);
    for(int i = 0 ; i < n; i ++)
    {
        int t;
        cin >> t;
        price[i] = t;
    }
    cout << RCP(price) << endl;
}
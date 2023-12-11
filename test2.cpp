// Header Files
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 *
 */
vector<int> prodDelivery(vector<int> orderID)
{
    int n = orderID.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        int curr = orderID[i];
        // cout<<orderID[i]<<" ";
        while (curr > 0)
        {
            temp += curr % 10;
            curr = curr / 10;
        }
        ans[i] = temp;
    }

    return ans;
}

int main()
{

    // input for orderID
    int orderID_size;
    cin >> orderID_size;
    vector<int> orderID;
    for (int idx = 0; idx < orderID_size; idx++)
    {
        int temp;
        cin >> temp;
        orderID.push_back(temp);
    }

    // output
    vector<int> result = prodDelivery(orderID);
    for (int idx = 0; idx < result.size() - 1; idx++)
    {
        cout << result[idx] << " ";
    }
    cout << result[result.size() - 1];

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
   
return 0;
}
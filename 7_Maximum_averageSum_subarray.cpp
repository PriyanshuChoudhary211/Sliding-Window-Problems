#include<bits/stdc++.h>
using namespace std;

    double findMaxAverage(vector<int>& nums, int k) {
      int i = 0,j = 0;
        double ans = 0,maxi = INT_MIN;
        while(j<nums.size())
        {
            ans += nums[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                maxi = max(ans,maxi);
                ans=ans-nums[i];
                i++;
                j++;
                
            }
        }
        return maxi/k;
    }

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0 ; i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    cout<<findMaxAverage(v,k);
}
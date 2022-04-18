#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
      int i = 0, j = 0,sum = 0,mini = INT_MAX;
        while(j<nums.size())
        {
            if(sum<=target)
            {
                sum+=nums[j];
            }
            while(sum>target)
            {
                mini = min(j-i+1,mini);
                sum -= nums[i];
                i++;
            }
            if(sum == target)
            {
                mini = min(j-i+1,mini);
            }
            j++;
        }
        if(mini == INT_MAX)
            return 0;
        return mini;
    }

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 0 ; i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
   int target;
   cin>>target;
    cout<<minSubArrayLen(target,arr);

    return;
}
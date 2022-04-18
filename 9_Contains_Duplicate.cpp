#include<bits/stdc++.h>
using namespace std;

   bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.empty()) return false;
        unordered_set<int> set;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k) set.erase(nums[i-k-1]);
            if (set.find(nums[i]) != set.end()) return true;
            set.insert(nums[i]);
        }
        return false;
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
    if(containsNearbyDuplicate(v,k))
      cout<<"True";
      else 
      cout<<"False";
}
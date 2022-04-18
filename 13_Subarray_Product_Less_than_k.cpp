#include<bits/stdc++.h>
using namespace std;
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
      int i = 0, j = 0, c=0, pro = 1;
        int n = arr.size();
        while (j < n)
        {
            pro*= arr[j];
            
            while (i<=j && pro >= k)
            {
                pro /= arr[i];
                i++;
            }
            if (pro < k)
            {
                c+=j-i+1;
            }
            j++;
        }
        
        return c;
    }
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i = 0 ; i<n;i++)
    {
        int x;
        cin>>x;
        ans.push_back(x);
    }
    int target;
    cin>>target;
   cout<<numSubarrayProductLessThanK(ans,target);

}
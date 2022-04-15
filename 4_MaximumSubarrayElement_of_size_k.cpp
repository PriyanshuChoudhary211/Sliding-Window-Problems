#include<bits/stdc++.h>
using namespace std;
vector<int> maxim(int arr[],int n,int k)
{
    list<int>l;
    vector<int>ans;
    int i = 0 , j=0;
    for(j = 0 ; j< k ;j++)
    {
        if(l.empty())
        {
          l.push_back(arr[j]);
        }
        else if(arr[j]>l.front())
        {
            while((!l.empty()&&arr[j]>l.front()))
            {
                l.pop_front();      
            }
            l.push_back(arr[j]);
        }
        else
        l.push_back(arr[j]);

    }
    ans.push_back(l.front());
    while(j<n)
    {
        i++;
        if(arr[i-1] == l.front())
         {
             l.pop_front();
         }
         while((!l.empty())&& arr[j]>l.front())
          { l.pop_front();}
           l.push_back(arr[j]);
        
        ans.push_back(l.front());
       j++;
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
 
    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ans;
    ans = maxim(arr,n,k);
    for(auto it:ans)
      cout<<it<<" ";
}